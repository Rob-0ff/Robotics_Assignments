import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/roboff/documents/varsityWork/Stellenbosch/Robotics/Assignments/Tester/install/tester_pkg'
