M = int(input())
N = int(input())
numlist = []
i = 1
while i ** 2 <= N:
    if M <= i ** 2 <= N:
        numlist.append(i ** 2)
    i += 1

if numlist == []:
    print(-1)

else:
    print(sum(numlist))
    print(numlist[0])
