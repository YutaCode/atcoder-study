N, T, P = map(int, input().split())
L = list(map(int, input().split()))
L.sort()
target = L[-P]
print(max(0, T - target))