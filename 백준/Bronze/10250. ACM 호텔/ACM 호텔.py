t = int(input())

for _ in range(t):
    H, W, N = map(int, input().split())
    floor = 0
    number = 0
    if N % H == 0:
        floor = H
        number = N // H
    else:
        floor = (N % H)
        number = (N // H) + 1
    print(f"{floor * 100 + number}")
