N = int(input())
A = []
for _ in range(N):
    x = list(map(int, input().split()))
    A.append(x)

element = 0
for i in range(N):
    if element >= i:
        element = A[element][i] - 1
    else:
        element = A[i][element] - 1

print(element + 1)