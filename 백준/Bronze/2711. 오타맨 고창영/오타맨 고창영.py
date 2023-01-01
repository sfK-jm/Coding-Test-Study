T = int(input())

for _ in range(T):
    n, word = input().split()
    n = int(n)
    print(word[:n - 1] + word[n:])
