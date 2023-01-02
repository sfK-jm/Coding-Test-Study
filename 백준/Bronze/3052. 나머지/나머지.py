numlist = []

for i in range(1, 11):
    num = int(input())
    numlist.append(num % 42)
numlist = set(numlist)
print(len(numlist))