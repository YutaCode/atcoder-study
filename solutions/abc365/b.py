N = int(input())
A = list(map(int, input().split()))

first = -1
second = -1
first_idx = -1
second_idx = -1

for i in range(N):
    if A[i] > first:
        second, second_idx = first, first_idx
        first, first_idx = A[i], i
    elif A[i] > second:
        second, second_idx = A[i], i


print(second_idx + 1)