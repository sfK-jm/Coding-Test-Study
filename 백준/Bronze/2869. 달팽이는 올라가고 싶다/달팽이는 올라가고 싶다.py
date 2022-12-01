A, B, V = map(int, input().split())
# A 낮에 올라가는 높이
# B 밤에 내려가는 높이
# V 올라갈 높이

day = (V - B) / (A - B)
if day == int(day):
    print(int(day))
else:
    print(int(day) + 1)