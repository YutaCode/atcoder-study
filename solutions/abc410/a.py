n = int(input())
a = [int(x) for x in input().split()]
k = int(input())

ans = 0

for x in a:
    if k <= x:
        ans += 1

print(ans)