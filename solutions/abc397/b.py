S = list(input())
ans = 0
if S[0] == 'o':
    ans += 1
for i in range(len(S) - 1):
    if S[i] == S[i + 1]:
        ans += 1
if (len(S) + ans) % 2 == 0:
    print(ans)
else:
    print(ans + 1)