S = input()
T = input()

A = []
res = -1

for word in S:
    for i in range(res + 1, len(T)):
        if T[i] == word:
            res = i
            A.append(i + 1)
            break

print(*A)