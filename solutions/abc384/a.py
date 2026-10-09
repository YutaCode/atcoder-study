N, c1 ,c2 = input().split()
N = int(N)
S = input()
ans = ''

for i in range(N):
    if S[i] == c1:
        ans += c1
    else:
        ans += c2

print(ans)