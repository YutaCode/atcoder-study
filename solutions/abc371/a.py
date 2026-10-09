S = list(input().split())

if (S[0] == '<' and S[1] == '>') or (S[0] == '>' and S[1] == '<'):
    print('A')
elif (S[0] == '<' and S[2] == '<') or (S[0] == '>' and S[2] == '>'):
    print('B')
else:
    print('C')