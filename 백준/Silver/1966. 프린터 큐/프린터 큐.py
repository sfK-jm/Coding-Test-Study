from collections import deque

TestCase = int(input())

for i in range(TestCase):
    DocumentNum, Sequence = map(int, input().split())
    Importance = deque(list(map(int, input().split())))
    Count = 0

    while 1:
        HighNum = max(Importance)
        SelectedNum = Importance.popleft()
        Sequence -= 1

        if HighNum == SelectedNum:
            Count += 1
            if Sequence < 0:
                print(Count)
                break

        else:
            Importance.append(SelectedNum)
            if Sequence < 0:
                Sequence = len(Importance) - 1
