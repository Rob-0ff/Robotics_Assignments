import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
 
 
class AddTwoIntsClient(Node):
  def __init__(self):
    self.counter_ = 0 
    super().__init__("add_two_ints_client")
    self.get_logger().info("Client has been created")
    self.client_ = self.create_client(AddTwoInts, "add_two_ints")
 
  def call_add_two_ints(self, a, b):
    while not self.client_.wait_for_service(1.0):
      self.get_logger().info("service not available, waiting again...")
  
    request = AddTwoInts.Request()
    request.a = a
    request.b = b

    future = self.client_.call_async(request)
    future.add_done_callback(self.future_caller)

  def future_caller(self, future):
    response = future.result()
    self.get_logger().info(str(response.sum))

def main(args=None):
  rclpy.init(args=args)
  node = AddTwoIntsClient()
  node.call_add_two_ints(3, 2)
  rclpy.spin(node)
  rclpy.shutdown()
 
 
if __name__ == "__main__":
  main()