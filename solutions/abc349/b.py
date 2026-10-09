S = input()

flg = True
for i in range(1, 100 + 1):
    P = set()
    for word in S:
        if S.count(word) == i:
            P.add(word)
    if len(P) == 0 or len(P) == 2:
        pass
    else:
        flg = False
    
if flg:
    print('Yes')
else:
    print('No')
    