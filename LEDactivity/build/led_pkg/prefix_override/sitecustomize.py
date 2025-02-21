import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/roboff/documents/varsityWork/Stellenbosch/Robotics/Assignments/LEDactivity/install/led_pkg'
