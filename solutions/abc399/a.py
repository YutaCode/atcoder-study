N = int(input())
S = input()
T = input()

dist = 0

for i in range(N):
    if S[i] != T[i]:
        dist += 1

print(dist)