K, N = map(int, input().split())
lengthOfLANLine = []

for _ in range(K):
    lengthOfLANLine.append(int(input()))

# print(lengthOfLANLine)

start, end = 1, max(lengthOfLANLine)

while start <= end:
    mid = (start + end) // 2
    lines = 0
    for i in lengthOfLANLine:
        lines += i // mid  # 잘린 랜선의 수

    if lines >= N:
        start = mid + 1
    else:
        end = mid - 1

print(end)
