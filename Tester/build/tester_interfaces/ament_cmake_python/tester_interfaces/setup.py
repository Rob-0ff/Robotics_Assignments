from setuptools import find_packages
from setuptools import setup

setup(
    name='tester_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('tester_interfaces', 'tester_interfaces.*')),
)
