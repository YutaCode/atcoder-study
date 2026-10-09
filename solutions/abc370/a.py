A, B = map(int, input().split())

if A + B == 1:
    if A == 1:
        print('Yes')
    else:
        print('No')
else:
    print('Invalid')