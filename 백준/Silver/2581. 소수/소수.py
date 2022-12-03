startNum = int(input())
lastNum = int(input())

primeNumberList = []
for num in range(startNum, lastNum + 1):
    divisor = 0
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                divisor += 1
                break
        if divisor == 0:
            primeNumberList.append(num)

if len(primeNumberList) > 0:
    print(sum(primeNumberList))
    print(min(primeNumberList))
else:
    print(-1)
