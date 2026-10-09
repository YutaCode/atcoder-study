N, A = map(int, input().split())
T = list(map(int, input().split()))

waiting = 0
is_procedure = False
start_time = 10000000
remain = len(T)
time = 0
set_T = set(T)

while remain > 0 or waiting > 0:
    if time in set_T:
        waiting += 1
        remain -= 1
    if time == start_time + A:
        is_procedure = False
        print(time)
        waiting -= 1
    if waiting > 0 and (not is_procedure):
        is_procedure = True
        start_time = time
    
    time += 1