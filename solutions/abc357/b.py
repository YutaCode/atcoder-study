S = input()

u = 0
l = 0

for word in S:
    if word.isupper():
        u += 1
    else:
        l += 1

if u > l:
    print(S.upper())
else:
    print(S.lower())