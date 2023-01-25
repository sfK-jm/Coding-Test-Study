N = int(input())
A = list(map(int, input().split()))
sortedA = sorted(A)

result = []

for i in range(N):
    idx = sortedA.index(A[i])
    result.append(idx)
    sortedA[idx] = -1
print(*result)
