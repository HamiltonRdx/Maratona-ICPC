#!/usr/bin/env python2
# -*-*- encoding: utf-8 -*-*-
# Created: Sun, 31 Mar 2013 18:19:00 -0300

"""
Project Euler 16 - Power digit sum
https://projecteuler.net/problem=16
"""
__author__ = "Julio Batista Silva"
__copyright__ = ""
__license__ = "GPL"
__version__ = "1.0"

num = 2**1000
sum = 0
for d in str(num):
    sum += int(d)
print sum
