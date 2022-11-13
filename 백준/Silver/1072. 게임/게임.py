totalGame, winGame = map(int, input().split())
winrate = winGame * 100 // totalGame
start = 0
end = totalGame
answer = 0
if winrate >= 99:
    print(-1)
    exit()

while start <= end:
    mid = (start + end) // 2
    if (winGame + mid) * 100 // (totalGame + mid) > winrate:
        end = mid - 1
        answer = mid
    else:
        start = mid + 1
print(answer)