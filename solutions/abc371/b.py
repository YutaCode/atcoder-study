N, M = map(int, input().split())

has_taro = ['x' for _ in range(N)]

for i in range(M):
    a, b = input().split()
    a = int(a) - 1
    if b == 'F':
        print('No')
        continue
    if has_taro[a] == 'x':
        print('Yes')
        has_taro[a] = 'o'
    else:
        print('No')