import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from std_srvs.srv import Empty
from turtlesim.srv import TeleportAbsolute

import math

class TurtleNavigator(Node):
    def __init__(self):
        super().__init__('turtle_navigator')
        
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        self.subscription = self.create_subscription(
            Pose, '/turtle1/pose', self.direction_callback, 10)
        
        self.clearing_client = self.create_client(Empty, '/clear')

        self.home_client = self.create_client(TeleportAbsolute, '/turtle1/teleport_absolute')
        
        self.direction = None
        self.target_x = None
        self.target_y = None
    
    def direction_callback(self, msg):
        self.direction = msg
    
    def navigate_to_target(self, target_x, target_y):
        self.target_x = target_x
        self.target_y = target_y

        while self.direction is None:
            self.get_logger().info("Waiting for pose information...")
            rclpy.spin_once(self)

        while not self.target_reached():
            velocity_msg = Twist()
            
            distance = math.sqrt((self.target_x - self.direction.x) ** 2 + 
                                 (self.target_y - self.direction.y) ** 2)
            
            desired_angle = math.atan2(self.target_y - self.direction.y, 
                                       self.target_x - self.direction.x)
            
            angle_diff = desired_angle - self.direction.theta
            angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff)) # ensures that angle calculated falls between -pi and pi

            velocity_msg.angular.z = 3 * angle_diff
            
            if abs(angle_diff) < 0.1:
                velocity_msg.linear.x = min(1.0, distance)
            
            self.publisher_.publish(velocity_msg)
            
            rclpy.spin_once(self)
        
        self.get_logger().info("Target reached!")
        
        self.publisher_.publish(Twist())
    
    def target_reached(self):
        if self.direction is None:
            return False
        
        distance = math.sqrt((self.target_x - self.direction.x) ** 2 + 
                             (self.target_y - self.direction.y) ** 2)
        return distance < 0.01

    def clear_screen(self):
        request = Empty.Request()
        while not self.clearing_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.clearing_client.call_async(request)
        self.get_logger().info('Screen cleared!')
        return

    def teleport_home(self):
        request = TeleportAbsolute.Request()
        while not self.home_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        request.x = 5.5
        request.y = 5.5
        request.theta = 0.0
        self.home_client.call_async(request)
        self.get_logger().info('Teleported to home position!')
        return




def main():
    rclpy.init()
    
    print("Welcome to the Turtle Navigator!")
    navigator = TurtleNavigator()
    
    while True:
        print("Menu:")
        print("m: Move the turtle")
        print("c = Clear the screen")
        print("h = Home position")
        print("q = Quit the program")

        user_input = input("Enter a command: ")
        if user_input == 'm':
            move_turtle(navigator)
        elif user_input == 'c':
            navigator.clear_screen()
        elif user_input == 'h':
            navigator.teleport_home()
        elif user_input == 'q':
            break
        else:
            print("Invalid command. Please try again.")
    
    navigator.destroy_node()
    rclpy.shutdown()

def move_turtle(navigator):
    target_x = float(input("Enter target X coordinate (1-10): "))

    target_y = input("Enter target Y coordinate (1-10): ")
    
    navigator.get_logger().info(f"Navigating to ({target_x}, {target_y})...")
    navigator.navigate_to_target(float(target_x), float(target_y))

def clear_screen(navigator):
    navigator.clear_screen()

if __name__ == '__main__':
    main()
