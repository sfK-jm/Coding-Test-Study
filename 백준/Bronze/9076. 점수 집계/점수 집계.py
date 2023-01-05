T = int(input())

for _ in range(T):
    score = list(map(int, input(). split()))
    score.remove(max(score))
    score.remove(min(score))
    if max(score) - min(score) >= 4:
        print("KIN")

    else:
        print(sum(score))