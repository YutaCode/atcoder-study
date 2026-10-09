N, K = map(int, input().split())
A = list(map(int, input().split()))

now = 1
for a in A:
    now *= a
    if len(str(now)) > K:
        now = 1

print(now)