M = int(input())
A = []
while M > 0:
    x = 1
    p = 0
    while x <= M:
        p += 1
        x = 3 ** p
    M -= x // 3
    A.append(str(p - 1)) 

print(len(A))
print(' '.join(A))