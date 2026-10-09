a, b, c, d, e, f = map(int, input().split())
g, h, i, j, k, l = map(int, input().split())

x = min(d, j) - max(a, g)
y = min(e, k) - max(b, h)
z = min(f, l) - max(c, i)

if x > 0 and y > 0 and z > 0:
    print('Yes')
else:
    print('No')