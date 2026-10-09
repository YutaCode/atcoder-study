A = list(map(int, input().split()))
ans = 0

for i in range(len(A)):
    flg = False
    for j in range(i):
        if A[i] == A[j]:
            ans += 1
            A.pop(i)
            A.pop(j)
            flg = True
            break
    if flg:
        break

if A[0] == A[1]:
    ans += 1

print(ans)