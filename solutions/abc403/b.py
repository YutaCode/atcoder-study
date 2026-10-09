T = input()
U = input()

for i in range(len(T) - len(U) + 1):
    for j in range(len(U)):
        if (T[i + j] == U[j]) or (T[i + j] == '?'):
            pass
        else:
            break
    else:
        print('Yes')
        break
else:
    print('No')