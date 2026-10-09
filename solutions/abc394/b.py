N = int(input())
S = {}

for i in range(N):
    s = input()
    S[len(s)] = s

for k in sorted(S):
    print(S[k], end='')
print()