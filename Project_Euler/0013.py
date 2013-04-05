#!/usr/bin/env python2
# -*-*- encoding: utf-8 -*-*-
# Created: Fri, 05 Apr 2013 20:43:06 -0300

"""
Project Euler - Large sum
https://projecteuler.net/problem=13
"""
__author__ = "Julio Batista Silva"
__copyright__ = ""
__license__ = "GPL"
__version__ = "1.0"

soma = 0
with open("input.txt") as input:
    for num in input:
        soma += int(num)

print str(soma)[0:10]
