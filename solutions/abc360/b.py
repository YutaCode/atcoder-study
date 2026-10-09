S, T = input().split()
flg = False

for w in range(1, len(S)):
    for c in range(1, w + 1):
        new_S = ''

        for i in range(c - 1, len(S), w):
            new_S += S[i]

        if new_S == T:
            flg = True

if flg:
    print('Yes')
else:
    print('No')