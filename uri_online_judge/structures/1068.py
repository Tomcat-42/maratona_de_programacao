#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

import sys

for i in sys.stdin:
    paren = list(filter(lambda x: x in ('(', ')'), list(i)))
    stack = []
    for j in paren:
        if (len(stack) and stack[-1] == '(' and j == ')'):
            stack.pop()
        else:
            stack.append(j)

    print("incorrect" if len(stack) else "correct")
