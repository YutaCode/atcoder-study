N = int(input())
S = [input() for _ in range(N)]

max_length = max(len(word) for word in S)

for i in range(N):
    if len(S[i]) < max_length:
        S[i] += '*' * (max_length - len(S[i]))

for i in range(max_length):
    line = ''
    for j in range(N - 1, -1, -1):
        line += S[j][i]
    print(line.rstrip('*'))