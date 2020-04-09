#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8

import sys

tesouro = set()

for joia in sys.stdin:
    tesouro.add(joia)

print(len(tesouro))
