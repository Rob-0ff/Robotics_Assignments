import rclpy
from rclpy.node import Node
from led_interfaces.srv import SetLED
from led_interfaces.msg import LedPanelState
 
class LedPanelNode(Node):
  def __init__(self):
    self.LEDs = [0, 0, 0] 
    super().__init__("led_panel")
    self.get_logger().info("Node has been created")
    self.publisher_ = self.create_publisher(LedPanelState, "led_panel_state", 10)
    self.server_ = self.create_service(SetLED, "set_led", self.callback_led_panel)

  def callback_led_panel(self, request : SetLED.Request, response : SetLED.Response):
    self.get_logger().info("Incoming request:" + ("Battery Full" if request.state else "Battery Empty"))
    response.success = True

    self.LEDs[request.led_number] = 0 if request.state else 1

    msg = LedPanelState()
    msg.led = self.LEDs

    self.publisher_.publish(msg)
    return response
 
 
def main(args=None):
  rclpy.init(args=args)
  node = LedPanelNode()
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()