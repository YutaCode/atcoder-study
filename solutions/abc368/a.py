N, K = map(int, input().split())
A = list(map(int, input().split()))

new_A = A[N - K:] + A[: N - K]

print(*new_A)