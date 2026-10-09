N, L, R = map(int, input().split())

A = [i for i in range(1, N + 1)]
A[L - 1 : R] = reversed(A[L - 1: R])
print(*A)