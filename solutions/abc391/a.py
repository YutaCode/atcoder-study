D = input()
ans = ''

for word in D:
    if word == 'N':
        ans += 'S'
    elif word == 'E':
        ans += 'W'
    elif word == 'W':
        ans += 'E'
    elif word == 'S':
        ans += 'N'

print(ans)