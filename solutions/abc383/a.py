N = int(input())

T = []
V = []

for _ in range(N):
    t, v = map(int, input().split())
    T.append(t)
    V.append(v)

w = 0
for i in range(T[0], T[-1] + 1):
    if w > 0:
        w -= 1
    
    if i in T:
        idx = T.index(i)
        w += V[idx]

print(w)