#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
from functools import reduce

n = int(input())

for k in range(n):
    notas = [int(i) for i in input().split()]
    media = reduce(lambda x, y: x+y, notas[1:], 0)/notas[0]
    print("%.3f%%" % (
        (100 * len([i for i in notas[1:] if i > media]))/notas[0]))
