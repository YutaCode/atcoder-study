import collections

A = list(map(int, input().split()))

d = collections.Counter(A)

l = sorted(list(set(d.values())) + [0])

if l[-1] >= 3 and l[-2] >= 2:
    print('Yes')
else:
    print('No')