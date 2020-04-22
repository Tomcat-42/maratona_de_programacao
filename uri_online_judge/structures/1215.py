#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

from re import findall

dic = set()

for i in range(10000):
    try:
        line = input().strip().lower()
    except:
        break
    dic |= set(findall(r"[a-z]+\b", line))


for i in sorted(dic):
    print(i)
print()
