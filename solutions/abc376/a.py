N, C = map(int, input().split())
T = [int(item) for item in input().split()]

ans = 1
last = T[0]

for i in range(1, N):
    if T[i] - last >= C:
        last = T[i]
        ans += 1

print(ans)