#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

PI = 3.14159


def area(raio):
    return PI*(raio**2)


raio = float(input())

print("A=%.4f" % (area(raio)))
