height = []
for _ in range(9):
    height.append(int(input()))

height.sort()

for i in range(8):
    for j in range(i + 1 , 9):
        if sum(height) - (height[i] + height[j]) == 100:
            fake1 = height[i]
            fake2 = height[j]
            break


height.remove(fake1)
height.remove(fake2)

print(*height)
