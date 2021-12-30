phrase = input()
wordList = phrase.split(' ')
noDuplicates = True
for word in wordList:
    if wordList.count(word) > 1:
        noDuplicates = False
        break

if noDuplicates:
    print('yes')
else:
    print('no')