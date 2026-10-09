N = int(input())

X = []
Y = []

for _ in range(N):
    x, y = map(int, input().split())
    X.append(x)
    Y.append(y)

for i in range(N):
    max_dist = -1
    idxmax = 0
    for j in range(N):
        dist = (X[i] - X[j]) ** 2 + (Y[i] - Y[j]) ** 2
        if dist > max_dist:
            max_dist = dist
            idxmax = j + 1
    print(idxmax)