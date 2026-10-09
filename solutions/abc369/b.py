N = int(input())
A, S = [], []
for _ in range(N):
    a, s = input().split()
    A.append(int(a))
    S.append(s)

ans = 100000
for l_start in range(1, 101):
    for r_start in range(1, 101):
        tired = 0
        l_now = l_start
        r_now = r_start
        for i in range(N):
            if S[i] == 'L':
                tired += abs(A[i] - l_now)
                l_now = A[i]
            elif S[i] == 'R':
                tired += abs(A[i] - r_now)
                r_now = A[i]
        ans = min(ans, tired)

print(ans)