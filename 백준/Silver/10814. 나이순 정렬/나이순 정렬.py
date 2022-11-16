memberNum = int(input())
memberList = []

for i in range(memberNum):
    age, name = map(str, input().split())
    age = int(age)
    memberList.append((age, name))

memberList.sort(key=lambda x: x[0])

for i in memberList:
    print(i[0], i[1])