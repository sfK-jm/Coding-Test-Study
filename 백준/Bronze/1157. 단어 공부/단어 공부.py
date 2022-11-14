word = input().upper()
wordList = list(set(word))
countWord = []

for i in wordList:
    count = word.count(i)
    countWord.append(count)

if countWord.count(max(countWord)) >= 2:
    print("?")
else:
    print(wordList[(countWord.index(max(countWord)))])