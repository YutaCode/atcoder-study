A, B, C = map(int, input().split())

if B > C:
    C += 24

if B < A < C or B < A + 24 < C:
    print('No')
else:
    print('Yes')