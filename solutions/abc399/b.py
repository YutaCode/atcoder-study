N = int(input())
P = list(map(int, input().split()))
r = [1] * N

for p in P:
    for i in range(N):
        if p > P[i]:
            r[i] += 1

for i in range(N):
    print(r[i])