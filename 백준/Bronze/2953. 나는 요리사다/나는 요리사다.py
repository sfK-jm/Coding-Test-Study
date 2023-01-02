highScore = 0
highScoreIndex = 0

for i in range(1, 6):
    a,b,c,d = map(int, input(). split())
    totalscore = a+b+c+d
    if totalscore > highScore:
        highScore = totalscore
        highScoreIndex = i

print(highScoreIndex, highScore)