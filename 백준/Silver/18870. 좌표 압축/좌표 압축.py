import sys
input = sys.stdin.readline

n = int(input())
list1 = list(map(int, input().split()))
list2 = list(set(list1))
list2.sort()

listCnt = {}
temp = 0
for i in list2:
    listCnt[i] = temp
    temp += 1

for i in list1:
    print(listCnt[i], end=' ')
