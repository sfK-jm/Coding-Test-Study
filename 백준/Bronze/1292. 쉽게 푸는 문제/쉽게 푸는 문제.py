numlist = [0,]

for i in range(1, 1000):
    for j in range(i):
        numlist.append(i)

A, B = map(int, input().split())

result = 0
for i in range(A, B + 1):
    result += numlist[i]

print(result)