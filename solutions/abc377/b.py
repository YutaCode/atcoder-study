S = [input() for _ in range(8)]
l = ['o' for _ in range(8)]
c = ['o' for _ in range(8)]
ans = 0

for i in range(8):
    for j in range(8):
        if S[i][j] == '#':
            l[i] = 'x'
            c[j] = 'x'

for i in range(8):
    for j in range(8):
        if l[i] == 'o' and c[j] == 'o':
            ans += 1

print(ans)