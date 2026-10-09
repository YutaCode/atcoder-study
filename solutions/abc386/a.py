ls = list(map(int, input().split()))

ls.sort()

if (ls.count(ls[0]) == 2 and ls.count(ls[-1])) == 2 or (ls.count(ls[0]) == 1 and ls.count(ls[-1]) == 3) or (ls.count(ls[0]) == 3 and ls.count(ls[-1]) == 1):
    print('Yes')
else:
    print('No')