from setuptools import find_packages
from setuptools import setup

setup(
    name='led_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('led_interfaces', 'led_interfaces.*')),
)
