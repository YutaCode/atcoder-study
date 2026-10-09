X = int(input())
s = 0
for i in range(10):
    for j in range(10):
        if i * j != X:
            s += i * j

print(s)