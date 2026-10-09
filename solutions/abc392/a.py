ls = list(map(int, input().split()))

ls.sort()

if ls[0] * ls[1] == ls[2]:
    print('Yes')
else:
    print('No')