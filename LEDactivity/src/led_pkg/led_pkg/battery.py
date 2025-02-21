import rclpy
from rclpy.node import Node
import time
from led_interfaces.srv import SetLED 
 
class BatteryNode(Node):
  def __init__(self):
    self.batteryState = True

    super().__init__("battery")
    self.get_logger().info("Client has been created")
    self.client_ = self.create_client(SetLED, "set_led")
    self.setBatteryFull()

  def setBatteryFull(self):
    self.batteryState = True
    self.call_led_panel()

  def setBatteryEmpty(self):
    self.batteryState = False
    self.call_led_panel()
    
  def call_led_panel(self):
    while not self.client_.wait_for_service(1.0):
      self.get_logger().info("service not available, waiting again...")
  
    request = SetLED.Request()
    request.led_number = 2
    request.state = self.batteryState

    future = self.client_.call_async(request)

    self.get_logger().info("Request has been sent")
    future.add_done_callback(self.future_caller)

  def future_caller(self, future):
    response = future.result()
    print("Response:" + str(response))
    self.get_logger().info(str(response))

    if self.batteryState:
      time.sleep(4)
      self.setBatteryEmpty()

    else:
      time.sleep(6)
      self.setBatteryFull()

def main(args=None):
  rclpy.init(args=args)
  node = BatteryNode()
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()

