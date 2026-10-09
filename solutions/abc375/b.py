N = int(input())
X,Y = [0], [0]
for _ in range(N):
    x, y = map(int, input().split())
    X.append(x)
    Y.append(y)
X.append(0)
Y.append(0)
distance = 0.
for i in range(N + 1):
    distance += ((X[i + 1] - X[i]) ** 2 + (Y[i + 1] - Y[i]) ** 2) ** (1/2)

print(distance)