N = int(input())

A = list(map(int, input().split()))
flg = False

for i in range(N - 2):
    if (A[i] == A[i + 1]) and (A[i] == A[i + 2]):
        flg = True

if flg:
    print('Yes')
else:
    print('No')