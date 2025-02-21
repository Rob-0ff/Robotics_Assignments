from setuptools import find_packages, setup

package_name = 'tester_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='roboff',
    maintainer_email='roboff@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "tester_node = tester_pkg.tester_node:main",
            "robot_news_station = tester_pkg.robot_news_station:main",
            "smartphone = tester_pkg.smartphone:main",
            "number_publisher = tester_pkg.number_publisher:main",
            "number_counter = tester_pkg.number_counter:main",
            "add_two_ints_server = tester_pkg.add_two_ints_server:main",
            "add_two_ints_client_no_oop = tester_pkg.add_two_ints_client_no_oop:main",
            "add_two_ints_client = tester_pkg.add_two_ints_client:main",
            "hw_status_publisher = tester_pkg.hw_status_publisher:main",
        ],
    },
)
