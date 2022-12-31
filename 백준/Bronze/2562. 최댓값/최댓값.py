numList = []
for _ in range(9):
    num = int(input())
    numList.append(num)

print(max(numList))
print(numList.index(max(numList)) + 1)
