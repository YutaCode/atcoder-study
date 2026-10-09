N = int(input())
q = []

for _ in range(N):
    S = input()
    if S == '2':
        print(q[0])
        q.pop(0)
    else:
        x = S.split()[1]
        q.append(x)