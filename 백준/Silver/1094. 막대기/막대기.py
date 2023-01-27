X = int(input())
result = 0
while X != 0:
    if X % 2 == 1:
        result += 1
    X = X // 2
print(result)