N, M = map(int, input().split())
A = list(map(int, input().split()))

num = [ A.count(k+1) for k in range(M) ]

for i in range(N+1):             
    if any(c == 0 for c in num):
        print(i)
        break
    last = A.pop()
    num[last-1] -= 1
else:
    print(N)