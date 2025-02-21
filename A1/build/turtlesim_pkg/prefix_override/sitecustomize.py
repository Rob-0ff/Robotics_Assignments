import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/roboff/documents/varsityWork/Stellenbosch/Robotics/Assignments/A1/install/turtlesim_pkg'
