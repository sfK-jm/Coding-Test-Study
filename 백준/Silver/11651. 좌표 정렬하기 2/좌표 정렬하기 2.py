import sys

input = sys.stdin.readline

n = int(input())
list = []
for i in range(n):
    x, y = map(int, input().split())
    list.append((y, x))

list.sort()

for y, x in list:
    print(x, y)
