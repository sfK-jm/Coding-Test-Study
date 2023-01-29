import sys

queue = []
n = int(sys.stdin.readline())

for _ in range(n):
    cmd = sys.stdin.readline()
    if "push" in cmd:  # push
        queue.append(int(cmd.split(' ')[1]))
    elif "pop" in cmd:  # pop
        if not queue:
            print(-1)
        else:
            print(queue.pop(0))
    elif "size" in cmd:  # size
        print(len(queue))
    elif "empty" in cmd:  # empty
        if not queue:
            print(1)
        else:
            print(0)
    elif "front" in cmd:  # front
        if not queue:
            print(-1)
        else:
            print(queue[0])
    elif "back" in cmd:  # back
        if not queue:
            print(-1)
        else:
            print(queue[-1])
