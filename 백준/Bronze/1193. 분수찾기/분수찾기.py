x = int(input())

line = 1
while x > line:
    x -= line
    line += 1

if line % 2 == 0:
    numerator = x # 분자
    denominator = line - x + 1 # 분모
else:
    numerator = line-x+1
    denominator = x

print(f"{numerator}/{denominator}")