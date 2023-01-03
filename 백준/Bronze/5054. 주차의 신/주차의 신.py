test = int(input())
for _ in range(test):
    storenum = int(input())
    storeLocation = list(map(int, input().split()))
    print((max(storeLocation) - min(storeLocation)) * 2)
