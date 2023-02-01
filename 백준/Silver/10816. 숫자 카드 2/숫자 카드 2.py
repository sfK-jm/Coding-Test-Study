import sys

input = sys.stdin.readline

N = int(input())
card = sorted(map(int, input().split()))
M = int(input())
testCard = map(int, input().split())


def binary(n, N, start, end):
    if start > end:
        return 0
    m = (start + end) // 2
    if n == N[m]:
        return N[start:end + 1].count(n)
    elif n < N[m]:
        return binary(n, N, start, m - 1)
    else:
        return binary(n, N, m + 1, end)


resultDic = {}
for n in card:
    start = 0
    end = len(card) - 1
    if n not in resultDic:
        resultDic[n] = binary(n, card, start, end)

print(' '.join(str(resultDic[x]) if x in resultDic else '0' for x in testCard))
