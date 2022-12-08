import sys

input = sys.stdin.readline

n = int(input())
list = []
for i in range(n):
    list.append(int(input()))

list.sort()

for i in range(len(list)):
    print(list[i])
