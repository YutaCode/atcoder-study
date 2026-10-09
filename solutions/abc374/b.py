S = input()
T = input()

max_length = max(len(S), len(T))
S += ' ' * (max_length - len(S))
T += ' ' * (max_length - len(T))

for i in range(max_length):
    if S[i] != T[i]:
        print(i + 1)
        break
else:
    print(0)