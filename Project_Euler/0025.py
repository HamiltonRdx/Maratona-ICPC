#!/usr/bin/env python2
# -*-*- encoding: utf-8 -*-*-
# Created: Tue, 02 Apr 2013 17:52:46 -0300


"""
Fórmula de Binet:
        fib(n) = (fi^n - psi^n) / sqrt(5)
        fi = (1 + sqrt(5)) / 2; psi = (1 - sqrt(5)) / 2
Se 'decimal' não fosse suficiente eu usaria 'bigfloat'.
"""

__author__ = "Julio Batista Silva"
__copyright__ = ""
__license__ = "GPL"
__version__ = "1.0"

import decimal

sqrt5 = decimal.Decimal(5).sqrt()
fi = (1 + sqrt5) / 2
psi = (1 - sqrt5) / 2


def fib(n):
    return (fi ** n - psi ** n) / sqrt5

n = 4000
while (fib(n) < 10**999):
    n += 1

print n
