N, K = map(int, input().split())
S = input()
fmt = ''
for _ in range(K):
    fmt += 'O'

print(S.count(fmt))