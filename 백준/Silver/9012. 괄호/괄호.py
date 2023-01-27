testNun = int(input())

for _ in range(testNun):
    inputData = input()
    count = 0

    for i in inputData:
        if i == '(':
            count += 1
        elif i == ')':
            count -= 1
        if count < 0:
            print('NO')
            break
            
    if count > 0:
        print("NO")
    elif count == 0:
        print('YES')
