n, m = map(int, input().split())
card = list(map(int, input().split()))

winlist = []
for i in range(len(card) - 2):
    for j in range(i + 1, len(card) - 1):
        for k in range(j + 1, len(card)):
            add = card[i] + card[j] + card[k]
            if add <= m:
                winlist.append(add)

print(max(winlist))
