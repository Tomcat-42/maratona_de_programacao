#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

n = int(input())
for i in range(n):
    s, t = [], 0
    inp = filter(lambda x: x in ('<', '>'), input())
    for j in inp:
        if(len(s) and j == '>' and s[-1] == '<'):
            s.pop()
            t += 1
        else:
            s.append(j)

    print(t)
