N, M = map(int, input().split())

S = [input() for _ in range(N)]
T = [input() for _ in range(M)]

for i in range(N - M + 1):
    for j in range(N - M + 1):
        if S[i][j: j + M] == T[0]:
            flg = True
            for k in range(1, M):
                if S[i + k][j: j + M] != T[k]:
                    flg = False
                    break
            if flg:
                print(i + 1, j + 1)