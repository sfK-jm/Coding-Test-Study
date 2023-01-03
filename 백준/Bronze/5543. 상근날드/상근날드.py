bugerPrice = []
drinkPrice = []
for _ in range(3):
    bugerPrice.append(int(input()))

bugerPrice.sort()

for _ in range(2):
    drinkPrice.append(int(input()))

drinkPrice.sort()

print((bugerPrice[0] + drinkPrice[0]) - 50)