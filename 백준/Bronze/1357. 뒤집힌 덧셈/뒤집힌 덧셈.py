def rev(x):
    strX = str(x)
    z = ""
    for i in reversed(strX):
        z += i
    intZ = int(z)
    return intZ


num1, num2 = input().split()
num1 = rev(num1)
num2 = rev(num2)
answer = num1 + num2
answer = rev(answer)
print(answer)
