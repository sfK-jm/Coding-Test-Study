while 1:
    numlist = list(map(int, input().split()))

    if numlist[0] == 0 and numlist[1] == 0 and numlist[2] == 0:
        break

    numlist.sort()

    if (numlist[2] * numlist[2]) == (numlist[0] * numlist[0]) + (numlist[1] * numlist[1]):
        print("right")
    else:
        print('wrong')
