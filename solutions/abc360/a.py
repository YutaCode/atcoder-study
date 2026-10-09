S = input()

flg = True
for c in S:
    if c == "R":
        flg = True
        break
    if c == "M":
        flg = False
        break

if flg:
    print("Yes")
else:
    print("No")