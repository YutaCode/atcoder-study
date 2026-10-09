H, W, X, Y = map(int, input().split())
X -= 1
Y -= 1
S = [list(input()) for _ in range(H)]
T = input()
dir = {'U': (-1, 0), 
       'D': (1, 0), 
       'L': (0, -1), 
       'R': (0, 1)}
ans = 0


for d in T:
    X_next = X + dir[d][0]
    Y_next = Y + dir[d][1]

    if (0 <= X_next < H) and (0 <= Y_next < W) and (S[X_next][Y_next] != '#'):
        X = X_next
        Y = Y_next
        if S[X_next][Y_next] == '@':
            ans += 1
            S[X_next][Y_next] = '.'
    else:
        continue

print(X + 1, Y + 1, ans)