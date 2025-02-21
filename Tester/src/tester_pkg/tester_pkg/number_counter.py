import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from example_interfaces.srv import SetBool
 
 
class NumberCounterNode(Node):
  def __init__(self):
    self.counter_ = 0 
    super().__init__("number_counter")
    self.get_logger().info("Number counter has been created")
    self.subscriber_ = self.create_subscription(Int64, "number", self.listener_callback, 10)
    self.publisher_ = self.create_publisher(Int64, "number_counter", 10)
    self.server_ = self.create_service(SetBool, "reset_counter", self.reset_counter_callback)

  def reset_counter_callback(self, request : SetBool.Request, response: SetBool.Response):
    if request.data:
      self.counter_ = 0
      response.success = True
      response.message = "Counter has been reset"
    else:
      response.success = False
      response.message = "Counter has not been reset"
    return response

  def listener_callback(self, msg: Int64):
    newMSG = Int64()
    self.counter_ += msg.data
    newMSG.data = self.counter_
    self.publisher_.publish(newMSG)
 
 
def main(args=None):
  rclpy.init(args=args)
  node = NumberCounterNode()
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()