from setuptools import find_packages
from setuptools import setup

setup(
    name='rl_sar',
    version='3.0.0',
    packages=find_packages(
        include=('rl_sar', 'rl_sar.*')),
)
