T = int(input())
for i in range(T):
    sentence = list(input())
    sentence[0] = sentence[0].upper()
    print("".join(sentence))
