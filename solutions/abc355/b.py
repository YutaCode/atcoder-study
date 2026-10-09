N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = sorted(A + B)

flg = False
for i in range(N + M - 1):
    if (C[i] in A) and (C[i + 1] in A):
        flg = True

if flg:
    print('Yes')
else:
    print('No')