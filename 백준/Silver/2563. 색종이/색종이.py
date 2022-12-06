import sys

input = sys.stdin.readline

# 2차원 배열 생성
whitePaper = [[0 for _ in range(101)] for _ in range(101)]

# 색종이의 수 입력
colorPaperNum = int(input())

# 색종이가 차지하는 공간을 1로 표시
for i in range(colorPaperNum):
    x, y = map(int, input().split())
    for i in range(x, x + 10):
        for j in range(y, y + 10):
            whitePaper[i][j] = 1

# 종이에서 색종이가 차지하는 넓이 세기
area = 0
for i in whitePaper:
    area += i.count(1)

print(area)
