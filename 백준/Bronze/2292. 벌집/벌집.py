n = int(input())

numHoneycomb = 1  # 벌집의 개수
cnt = 1

while n > numHoneycomb:
    numHoneycomb += 6 * cnt
    cnt += 1
print(cnt)
