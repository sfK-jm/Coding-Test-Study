
while 1:
    Num = input()
    if Num == "0":
        break
    if Num == Num[::-1]:
        print('yes')
    else:
        print('no')
