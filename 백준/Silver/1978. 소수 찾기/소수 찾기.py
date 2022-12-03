n = int(input())
numbers = map(int, input().split())
primeNumCount = 0
for num in numbers:
    divisor = 0
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                divisor += 1
        if divisor == 0:
            primeNumCount += 1
print(primeNumCount)