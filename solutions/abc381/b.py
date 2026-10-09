S = input()
ans = True

if len(S) % 2 != 0:
    ans = False
else:
    for c in S:
        if S.count(c) != 2:
            ans = False
            break

if ans:
    for i in range(0, len(S), 2):
        if S[i] != S[i + 1]:
            ans = False
            break

if ans:
    print('Yes')
else:
    print('No')