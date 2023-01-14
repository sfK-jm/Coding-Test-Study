T = int(input())
for _ in range(T):
    result = 0
    start, end = map(int, input().split())
    for i in range(start, end + 1):
        count0 = str(i)
        result += count0.count('0')
    print(result)
