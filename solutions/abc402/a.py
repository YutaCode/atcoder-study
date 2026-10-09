S = input()
ans = ''

# for word in S:
#     if word.isupper():
#         ans += word

for word in S:
    if ord('A') <= ord(word) <= ord('Z'):
        ans += word

print(ans)