#! /usr/bin/env python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8


def testVag(vagInput, vagOutput):
    vagIn = vagInput.copy()
    estacao = []
    tmp = []

    for i in range(len(vagOutput)):
        if (len(estacao) and estacao[-1] == vagOutput[i]):
            tmp.append(estacao.pop())
        else:
            while True:
                if(len(vagIn)):
                    estacao.append(vagIn.pop())
                else:
                    return False
                if(len(estacao) and estacao[-1] == vagOutput[i]):
                    tmp.append(estacao.pop())
                    break

    return tmp == vagOutput


n = int(input())
while n:
    vagIn = list(range(n, 0, -1))

    vagStr = input()
    while vagStr != "0":
        vagOut = [int(i) for i in vagStr.split()]
        print("Yes" if testVag(vagIn, vagOut) else "No")
        vagStr = input()
    print()
    n = int(input())
