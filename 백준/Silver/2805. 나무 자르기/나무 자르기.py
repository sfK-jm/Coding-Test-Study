NumOfTrees, LengthOfTree = map(int, input().split())
tree = list(map(int, input().split()))
start, end = 1, max(tree)

while start <= end:
    mid = (start + end) // 2
    wood = 0
    for i in tree:
        if i >= mid:
            wood += i - mid

    if wood >= LengthOfTree:
        start = mid + 1
    else:
        end = mid - 1
print(end)
