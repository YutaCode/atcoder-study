N = int(input())

cards = [0 for _ in range(100)]

for _ in range(N):
    s = input()
    if s == '2':
        print(cards[-1])
        cards.pop(-1)
    else:
        q, x = map(int, s.split())
        cards.append(x)