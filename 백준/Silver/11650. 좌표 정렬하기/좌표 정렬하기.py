import sys

input = sys.stdin.readline

n = int(input())
list = []
for i in range(n):
    x, y = map(int, input().split())
    list.append((x, y))
list.sort()
for i in range(n):
    print(list[i][0], list[i][1])
