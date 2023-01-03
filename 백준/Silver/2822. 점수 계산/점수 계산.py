score = []
for _ in range(8):
    score.append(int(input()))

index = []
answer = 0
for i in range(5):
    answer += max(score)
    index.append(score.index(max(score)) + 1)
    score[score.index(max(score))] = 0

index.sort()
print(answer)
print(*index)