N, T, A = map(int, input().split())

diff = max(T, A) - min(T, A)
res = N - T - A

if res > diff:
    print("No")
else:
    print("Yes")