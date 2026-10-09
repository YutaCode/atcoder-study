A = list(map(int, input().split()))

A_sorted = sorted(A)
ans = False

for i in range(len(A)):
    for j in range(i):
        A[i], A[j] = A[j], A[i]

        if A == A_sorted and abs(i - j) == 1: 
            ans = True
        
        A[i], A[j] = A[j], A[i]

if ans:
    print('Yes')
else:
    print('No')