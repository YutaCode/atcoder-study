A, B = map(int, input().split())

ans = 0
for i in range(1, 4):
    if (i != A and i != B):
        ans = i

if A == B:
    ans = -1

print(ans)