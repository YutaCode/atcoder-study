S = input()

P = set()
for i in range(1, len(S) + 1):
    for j in range(len(S) - i + 1):
        p = S[j: i + j]
        P.add(p)

print(len(P))