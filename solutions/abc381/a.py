N = int(input())
S = input()

flg = True

if N % 2 == 0:
    flg = False

for i in range(N // 2):
    if S[i] != '1':
        flg = False

if S[N // 2] != '/':
    flg = False

for i in range(N // 2 + 1, N):
    if S[i] != '2':
        flg = False

if flg:
    print('Yes')
else:
    print('No')