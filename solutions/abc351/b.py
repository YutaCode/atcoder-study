N = int(input())

A, B = [[] for _ in range(N)], [[] for _ in range(N)]

for i in range(N):
    S = input()
    A[i] = S

for i in range(N):
    S = input()
    B[i] = S

for i in range(N):
    for j in range(N):
        if A[i][j] != B[i][j]:
            print(i + 1, j + 1)