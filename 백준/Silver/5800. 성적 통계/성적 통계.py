K = int(input())
for i in range(K):
    studentScore = list(map(int, input().split()))
    del studentScore[0]
    studentScore.sort(reverse=True)
    difference = []
    for j in range(len(studentScore) - 1):
        difference.append(studentScore[j] - studentScore[j + 1])
    print(f"Class {i + 1}")
    print(f"Max {max(studentScore)}, Min {min(studentScore)}, Largest gap {max(difference)}")
