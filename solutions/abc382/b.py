N, D = map(int, input().split())
S = list(input())
eat = 0
for i in range(N):
    if eat == D:
        break
    if S[-(i + 1)] == '@':
        S[-(i + 1)] = '.'
        eat += 1

print(''.join(S))