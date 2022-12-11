n = int(input())

list = []
for i in str(n):
    list.append(int(i))

list.sort(reverse=True)  # 내림차순

for i in list:
    print(i, end='')
