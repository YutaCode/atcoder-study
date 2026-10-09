n = int(input())
t = input()
a = input()

ans = False
for i in range(n):
    if t[i] == "o" and a[i] == "o":
        ans = True

if ans:
    print("Yes")
else:
    print("No")
