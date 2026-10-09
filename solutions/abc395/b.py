N = int(input())
ans = [['.' for _ in range(N)] for _ in range(N)]
for i in range(N):
    j = N - i - 1
    if i <= j:
        if i % 2 == 0:
            for k in range(i, j + 1):
                for l in range(i, j + 1):
                    ans[k][l] = '#'
        elif i % 2 == 1:
            for k in range(i, j + 1):
                for l in range(i, j + 1):
                    ans[k][l] = '.'
    else:
        continue

for i in range(N):
    print(*ans[i], sep='')