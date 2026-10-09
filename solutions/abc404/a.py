S = input()

for i in range(ord('a'), ord('z') + 1):
    if S.find(chr(i)) == -1:
        print(chr(i))
        break