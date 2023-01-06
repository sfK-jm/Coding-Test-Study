k = int(input())
moneyList = []
for _ in range(k):
    money = int(input())
    if money == 0:
        moneyList.pop()
    else:
        moneyList.append(money)

print(sum(moneyList))