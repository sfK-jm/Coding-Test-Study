N = int(input())
world = []

for i in range(N):
    world.append(input())

listWorld = list(set(world))

listWorld.sort()
listWorld.sort(key=len)

for i in listWorld:
    print(i)