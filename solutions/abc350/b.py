N, Q = map(int, input().split())
T = list(map(int, input().split()))

for element in set(T):
    if T.count(element) % 2 == 1:
        N -= 1

print(N)