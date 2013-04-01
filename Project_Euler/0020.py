#!/usr/bin/env python2
# -*-*- encoding: utf-8 -*-*-
# Created: Mon, 01 Apr 2013 19:33:05 -0300

"""
Project Euler - Factorial digit sum
https://projecteuler.net/problem=20
"""
__author__ = "Julio Batista Silva"
__copyright__ = ""
__license__ = "GPL"
__version__ = "1.0"

fat = 1
for n in range(1,101):
    fat *= n

sum = 0
for n in str(fat):
    sum += int(n)

print sum
