import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import math

class TurtleNavigator(Node):
    def __init__(self):
        super().__init__('turtle_navigator')
        
        # Create a publisher for velocity commands
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        
        # Create a subscriber to get the turtle's current pose
        self.subscription = self.create_subscription(
            Pose, '/turtle1/pose', self.pose_callback, 10)
        
        self.current_pose = None  # Store the current pose of the turtle
        self.target_x = None  # Target X coordinate
        self.target_y = None  # Target Y coordinate
    
    def pose_callback(self, msg):
        """Callback function to update the current pose of the turtle."""
        self.current_pose = msg
    
    def navigate_to_target(self, target_x, target_y):
        """Moves the turtle to the specified target location."""
        self.target_x = target_x
        self.target_y = target_y

        while self.current_pose is None:
            self.get_logger().info("Waiting for pose information...")
            rclpy.spin_once(self)

        while not self.reached_target():
            velocity_msg = Twist()
            
            # Calculate the distance to the target
            distance = math.sqrt((self.target_x - self.current_pose.x) ** 2 + 
                                 (self.target_y - self.current_pose.y) ** 2)
            
            # Calculate the angle to the target
            desired_angle = math.atan2(self.target_y - self.current_pose.y, 
                                       self.target_x - self.current_pose.x)
            
            # Compute the angular velocity
            angle_diff = desired_angle - self.current_pose.theta
            
            # Ensure the angle is within [-pi, pi]
            angle_diff = math.atan2(math.sin(angle_diff), math.cos(angle_diff))

            # Proportional control for rotation
            velocity_msg.angular.z = 2.0 * angle_diff
            
            # Move forward only if facing roughly in the correct direction
            if abs(angle_diff) < 0.1:
                velocity_msg.linear.x = min(1.0, distance)
            
            # Publish velocity command
            self.publisher_.publish(velocity_msg)
            
            # Spin once to process callbacks
            rclpy.spin_once(self)
        
        self.get_logger().info("Target reached!")
        
        # Stop the turtle once it reaches the target
        stop_msg = Twist()
        self.publisher_.publish(stop_msg)
    
    def reached_target(self):
        """Checks if the turtle has reached the target location."""
        if self.current_pose is None:
            return False
        
        distance = math.sqrt((self.target_x - self.current_pose.x) ** 2 + 
                             (self.target_y - self.current_pose.y) ** 2)
        return distance < 0.1  # Consider the target reached if within 0.1 units


def main():
    rclpy.init()
    
    navigator = TurtleNavigator()
    
    # Get user input for target coordinates
    target_x = float(input("Enter target X coordinate (1-10): "))
    target_y = float(input("Enter target Y coordinate (1-10): "))
    
    navigator.get_logger().info(f"Navigating to ({target_x}, {target_y})...")
    navigator.navigate_to_target(target_x, target_y)
    
    navigator.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
