from collections import deque

n = int(input())
q = deque()
for i in range(1, n + 1):
    q.append(i)
while len(q) != 1:
    q.popleft()  # 제일 위에 있는 카드 버리기
    q.append(q.popleft())  # 제일 위에 있는 카드 맨 아래로 옮기기

print(q[0])
