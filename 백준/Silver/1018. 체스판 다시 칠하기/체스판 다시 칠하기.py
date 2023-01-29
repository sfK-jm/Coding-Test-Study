n, m = map(int, input().split())
inputBoard = []
result = []

for _ in range(n):
    inputBoard.append(input())

for x in range(n - 7):
    for y in range(m - 7):
        whiteBox = 0  # 흰색으로 시작하는 칸
        blackBox = 0
        for i in range(x, x + 8):
            for j in range(y, y + 8):
                if (i + j) % 2 == 0:
                    if inputBoard[i][j] != 'W':
                        whiteBox += 1  # W로 칠할 갯수
                    else:
                        blackBox += 1  # B로 칠할 갯수

                else:  # 홀수인 경우
                    if inputBoard[i][j] != 'W':
                        blackBox += 1
                    else:
                        whiteBox += 1

        result.append(whiteBox)  # W로 시작할 때 경우의 수
        result.append(blackBox)  # B로 시작할 때 경우의 수
print(min(result))
