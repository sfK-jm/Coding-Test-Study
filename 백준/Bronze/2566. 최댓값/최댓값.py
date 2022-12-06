highestNum = 0
x = 0
y = 0
for i in range(9):
    line = list(map(int, input().split()))
    if max(line) > highestNum:
        highestNum = max(line)
        x = i
        y = line.index(highestNum)
print(highestNum)
print(x + 1, y + 1)
