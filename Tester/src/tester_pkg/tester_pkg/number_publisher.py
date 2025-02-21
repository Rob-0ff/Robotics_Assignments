import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
 
 
class NumberPublisherNode(Node):
  def __init__(self):
    super().__init__("number_publisher")
    self.declare_parameter("number_", 3)
    self.declare_parameter("time_period", 1.0)
    self.number_ = self.get_parameter("number_").value
    self.time_period_ = self.get_parameter("time_period").value
    
    self.publisher_ = self.create_publisher(Int64, "number", 10)
    self.get_logger().info("Number publisher has been created and will publish " + str(self.number_))
    self.create_timer(self.time_period_, self.publish_number)

  def publish_number(self):
    msg = Int64()
    msg.data = self.number_
    self.publisher_.publish(msg)
 
 
def main(args=None):
  rclpy.init(args=args)
  node = NumberPublisherNode()
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()