N = int(input())
A = list(map(int, input().split()))
ans = 0

while sorted(A)[-2] > 0:
    A.sort(reverse=True)
    A[0] -= 1
    A[1] -= 1
    ans += 1

print(ans)