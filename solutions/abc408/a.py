N, S = map(int, input().split())

T = [0] + [int(x) for x in input().split()]

ans = True
for i in range(N):
    if T[i + 1] - T[i] > S:
        ans = False

if ans:
    print('Yes')
else:
    print("No")