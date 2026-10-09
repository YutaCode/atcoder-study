S = input()
ans = 0
for j in range(len(S)):
    for i in range(j):
        if S[i] == 'A' and S[j] == 'B':
            if 2 * j - i < len(S) and S[2 * j - i] == 'C':
                ans += 1

print(ans)