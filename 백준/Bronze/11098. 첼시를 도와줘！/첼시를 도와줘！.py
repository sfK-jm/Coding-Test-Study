case = int(input())
for _ in range(case):
    playerNum = int(input())
    highCost = 0
    highCostPlayer = ""
    for _ in range(playerNum):
        cost , name = input().split()
        cost = int(cost)
        if cost > highCost:
            highCost = cost
            highCostPlayer = name
    print(highCostPlayer)