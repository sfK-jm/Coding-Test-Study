alpabatList = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]
word = input()

time = 0
for unit in alpabatList:
    for i in unit: # alpabet 리스트에서 각 요소를 가져와서 한글자씩 분리함
        for x in word: # 입력받은 문자를 하나씩 분리함
            if i == x:
                time += alpabatList.index(unit) + 3 # time = time + index + 3
print(time)