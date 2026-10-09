N = int(input())
login = False
ans = 0
for _ in range(N):
    S = input()
    if S == 'login':
        login = True
    elif S == 'logout':
        login = False
    
    if (not login) and S == 'private':
        ans += 1

print(ans)