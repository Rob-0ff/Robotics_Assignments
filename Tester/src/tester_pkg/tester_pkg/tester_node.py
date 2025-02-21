import rclpy
from rclpy.node import Node
 
 
class MyCustomNode(Node): # MODIFY NAME
  def __init__(self):
    self.counter_ = 0 
    super().__init__("tester_node") # MODIFY NAME
    self.get_logger().info("Node has been created")
    self.create_timer(1, self.timer_caller)

  def timer_caller(self):
    self.counter_ += 1
    self.get_logger().info("Hello World aaaa: " + str(self.counter_))
 
 
def main(args=None):
  rclpy.init(args=args)
  node = MyCustomNode() # MODIFY NAME
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()