S = input()
ans_list = []
ans = 0
for c in S:
    if c == '|':
        ans_list.append(ans)
        ans = 0
    else:
        ans += 1

ans_list.pop(0)
print(*ans_list)