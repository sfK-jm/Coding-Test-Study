maximumNumberPeople = 0
currentNumberPeople = 0
for i in range(10):
    deletePeople, addPeople = map(int, input().split())
    currentNumberPeople += addPeople
    currentNumberPeople -= deletePeople
    if currentNumberPeople > maximumNumberPeople:
        maximumNumberPeople = currentNumberPeople
print(maximumNumberPeople)
