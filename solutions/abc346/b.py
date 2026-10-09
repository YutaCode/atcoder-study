S = 'wbwbwwbwbwbw' * 50
W, B = map(int, input().split())
l = W + B

flg = False
for i in range(len(S) - l + 1):
    p = S[i: i + l]
    w_count = p.count('w')

    if w_count == W:
        flg = True
        break

if flg:
    print('Yes')
else:
    print('No')