import sys
from collections import Counter

input = sys.stdin.readline
n = int(input())
list = [int(input()) for _ in range(n)]

# 산술 평균
sum = 0
for num in list:
    sum += num
avg = round(sum / n)

# 중앙값
midInedx = n // 2
sortedList = sorted(list)
mid = sortedList[midInedx]

# 최빈값
cnt = Counter(sortedList).most_common()  # 데이터의 개수가 많은 순으로 정렬
if len(cnt) > 1 and cnt[0][1] == cnt[1][1]:  # 최빈값이 2개 이상 일때
    modeNum = cnt[1][0]
else:
    modeNum = cnt[0][0]

# 범위
rng = max(list) - min(list)

print(avg)
print(mid)
print(modeNum)
print(rng)
