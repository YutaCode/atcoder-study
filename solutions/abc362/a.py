RGB = list(map(int, input().split()))
C = input()

if C == "Red":
    print(min(RGB[1], RGB[2]))
elif C == "Green":
    print(min(RGB[0], RGB[2]))
elif C == "Blue":
    print(min(RGB[0], RGB[1]))