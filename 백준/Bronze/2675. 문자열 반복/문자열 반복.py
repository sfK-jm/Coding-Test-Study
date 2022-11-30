testCaseNum = int(input())
for _ in range(testCaseNum):
    num, word = input().split()
    for i in word:
        print(i * int(num), end='')
    print()