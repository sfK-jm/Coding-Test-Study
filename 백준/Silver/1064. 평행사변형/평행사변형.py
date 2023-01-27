XA, YA, XB, YB, XC, YC = map(int, input().split())

answer = 0.0

if XA == XB == XC or YA == YB == YC:
    answer = -1.0
elif YA - YB != 0 and YA - YC != 0 and YB - YC != 0 \
        and (XA - XB) / (YA - YB) == (XB - XC) / (YB - YC) == (XA - XC) / (YA - YC):
    answer = -1.0
else:
    dAB = ((XA - XB) ** 2 + (YA - YB) ** 2) ** (1 / 2)
    dBC = ((XB - XC) ** 2 + (YB - YC) ** 2) ** (1 / 2)
    dCA = ((XC - XA) ** 2 + (YC - YA) ** 2) ** (1 / 2)

    answer = (max(dAB, dBC, dCA) - min(dAB, dBC, dCA)) * 2

print(answer)
