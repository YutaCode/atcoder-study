N, K = map(int, input().split())
A = list(map(int, input().split()))

ans = 0
res = K
for i in range(N):
    if A[i] > res:
        res = K - A[i]
        ans += 1
    else:
        res -= A[i]
else:
    ans += 1
print(ans)