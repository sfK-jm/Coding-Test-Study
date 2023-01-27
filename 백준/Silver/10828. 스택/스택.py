import sys

def push(x):
    stack.append(x)

def pop():
    if (not stack):
        return -1
    else:
        return stack.pop()

def size():
    return len(stack)

def empty():
    return 0 if stack else 1

def top():
    return stack[-1] if stack else -1


N = int(sys.stdin.readline().rstrip())
stack = []

for _ in range(N):
    inputData = sys.stdin.readline().rstrip().split()

    order = inputData[0]

    if order == "push":
        push(inputData[1])
    elif order == "pop":
        print(pop())
    elif order == "size":
        print(size())
    elif order == "empty":
        print(empty())
    elif order == "top":
        print(top())
