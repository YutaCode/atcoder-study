xa, ya = map(int, input().split())
xb, yb = map(int, input().split())
xc, yc = map(int, input().split())

ab = (xb - xa) ** 2 + (yb - ya) ** 2
ac = (xc - xa) ** 2 + (yc - ya) ** 2
bc = (xc - xb) ** 2 + (yc - yb) ** 2

if (ab + ac == bc) or (ab + bc == ac) or (ac + bc == ab):
    print('Yes')
else:
    print('No')