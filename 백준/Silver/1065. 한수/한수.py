n = int(input())
countHansu = 0
for i in range(1, n + 1):
    if i < 100:
        countHansu += 1
    else:
        isHansu = True
        i = str(i)
        diff = int(i[0]) - int(i[1])
        for j in range(1, len(i)-1):
            if (int(i[j]) - int(i[j+1]) != diff):
                isHansu = False
                break
            if isHansu:
                countHansu += 1
print(countHansu)