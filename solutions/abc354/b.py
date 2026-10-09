N = int(input())
names = []
points = 0
for _ in range(N):
    name, point_str = input().split()
    names.append(name)
    points += int(point_str)

names.sort()
winner = points % N
print(names[winner])