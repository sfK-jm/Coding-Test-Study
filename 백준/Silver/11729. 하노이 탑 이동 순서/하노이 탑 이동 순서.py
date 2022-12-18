def hanoiTower(n, start, end):
    if n == 1:
        print(start, end)
        return
    hanoiTower(n - 1, start, 6 - start - end)  # 1단계
    print(start, end)
    hanoiTower(n - 1, 6 - start - end, end)  # 3단계


n = int(input())
print(2 ** n - 1)
hanoiTower(n, 1, 3)
