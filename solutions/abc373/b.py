S = input()
ans = 0
for i in range(ord('A'), ord('Z')):
    ans += abs(S.index(chr(i + 1)) - S.index(chr(i)))
print(ans)