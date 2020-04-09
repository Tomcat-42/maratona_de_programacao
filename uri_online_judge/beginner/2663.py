#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

num, minC = int(input()), int(input())
pts = [int(input()) for i in range(num)]
pts.sort(reverse=True)

while(minC < num and pts[minC-1] == pts[minC]):
    minC += 1

print(minC)
