H = int(input())
now = 0
for i in range(100000):
    now += 2 ** i
    if now > H:
        print(i + 1)
        break