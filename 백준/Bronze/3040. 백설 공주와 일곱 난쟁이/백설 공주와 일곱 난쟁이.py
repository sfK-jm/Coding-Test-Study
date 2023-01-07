dwarf = sorted([int(input()) for _ in range(9)])

for i in range(8):
    for j in range(i+1, 9):
        if sum(dwarf) - dwarf[i] - dwarf[j] == 100:
            dwarf.pop(i)
            dwarf.pop(j-1)
            break
    if len(dwarf) == 7:
        break

for answer in dwarf:
    print(answer)



