N, M = map(int, input().split())

H = list(map(int, input().split()))

sanitized = 0
for i in range(N):
    sanitized += H[i]
    if sanitized > M:
        print(i)
        break

else:
    print(N)