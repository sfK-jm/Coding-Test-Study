N = int(input())
score = list(map(int, input().split()))
highScore = max(score)
sumScore = sum(score)
print(sumScore * 100 / highScore / int(N))
