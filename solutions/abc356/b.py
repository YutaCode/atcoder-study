N, M = map(int, input().split())
A = list(map(int, input().split()))
X_sum = [0 for _ in range(M)]

for i in range(N):
    X = list(map(int, input().split()))
    for j in range(M):
        X_sum[j] += X[j]

flg = True
for a, x in zip(A, X_sum):
    if x < a:
        flg = False

if flg:
    print('Yes')
else:
    print('No')