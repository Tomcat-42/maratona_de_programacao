def fat(x):
    a = 1
    for i in range(1, x+1):
        a *= int(i)
    return a


while True:
    i = input().strip()
    if i == "0":
        break
    print(fat(len(i)))
