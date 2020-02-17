#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

while(True):
    try:
        m, n = input().split()
    except EOFError:
        break

    for i in range(0, int(m), 1):
        j = 0
        for tmp in input().split():
            if int(tmp) == 1:
                trein = (int(i), int(j))
            elif int(tmp) == 2:
                analog = (int(i), int(j))
            j += 1

    print(abs(trein[0]-analog[0]) + abs(trein[1]-analog[1]))
