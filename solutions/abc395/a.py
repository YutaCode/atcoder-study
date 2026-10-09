N = int(input())

A = list(map(int, input().split()))

flg = True

if A != sorted(A):
    flg = False

for i in range(N - 1):
    if A[i] == A[i + 1]:
        flg = False

if flg:
    print('Yes')
else:
    print('No')