word = input()
result = 0
cheak = ["a", "e", "i", "o", "u"]
for i in word:
    if i in cheak:
        result += 1

print(result)