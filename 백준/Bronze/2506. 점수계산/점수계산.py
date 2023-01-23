N = int(input())
marking = list(map(int, input().split()))
result = 0
problemScore = 1
for i in marking:

    if i == 0:
        problemScore = 1


    elif i == 1:
        result += problemScore
        problemScore += 1

print(result)
