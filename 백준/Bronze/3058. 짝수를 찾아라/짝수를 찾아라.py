T = int(input())
for i in range(T):
    Number = list(map(int, input().split()))
    evenNumber = []
    for j in Number:
        if j % 2 == 0:
            evenNumber.append(j)

    print(sum(evenNumber), min(evenNumber))
