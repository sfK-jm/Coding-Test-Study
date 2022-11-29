sugarNum = int(input())
bag = 0
while sugarNum >= 0:
    if (sugarNum % 5 == 0):
        bag += (sugarNum // 5)
        print(bag)
        break
    sugarNum -= 3
    bag += 1
else:
    print(-1)

