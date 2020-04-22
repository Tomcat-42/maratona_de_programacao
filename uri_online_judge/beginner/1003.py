#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

from functools import reduce

l = [int(input()), int(input())]

print("SOMA = %d" % (reduce(lambda x, y: x+y, l, 0)))
