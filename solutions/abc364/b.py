H, W = map(int, input().split())
Sy, Sx = map(int, input().split())
Sy -= 1
Sx -= 1
C = [input() for _ in range(H)]
X = input()
moves = {'L':(-1,0), 'R':(1,0), 'U':(0,-1), 'D':(0,1)}
for word in X:
    dx, dy = moves[word]
    next_x = Sx + dx
    next_y = Sy + dy

    if ((0 <= next_x < W) and (0 <= next_y < H) and C[next_y][next_x] == '.'):
        Sx = next_x
        Sy = next_y

print(Sy + 1, Sx + 1)