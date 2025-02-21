import rclpy
from rclpy.node import Node
from tester_interfaces.msg import HardwareStatus
 
 
class HardwareStatusPublisherNode(Node):
  def __init__(self):
    super().__init__("hw_status_publisher") 
    self.get_logger().info("Hardware status publisher has been created")
    self.hw_status_pub = self.create_publisher(HardwareStatus, "hardware_status", 10)

    self.timer = self.create_timer(1.0, self.publish_hw_status)
 
  def publish_hw_status(self):
    msg = HardwareStatus()
    msg.temp = 50.0
    msg.motors_ready = True
    msg.debug_message = "Everything is running badly"

    self.hw_status_pub.publish(msg)
    self.get_logger().info("Publishing: %s" % msg)
 
def main(args=None):
  rclpy.init(args=args)
  node = HardwareStatusPublisherNode() 
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()