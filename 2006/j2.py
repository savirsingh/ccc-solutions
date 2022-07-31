# code by savir singh

time = {'a': 1, 'b': 2, 'c': 3, 'd': 1, 'e': 2, 'f': 3, 'g': 1, 'h': 2, 'i': 3, 'j': 1, 'k': 2, 'l': 3, 'm': 1, 'n': 2, 'o': 3, 'p': 1, 'q': 2, 'r': 3, 's': 4, 't': 1, 'u': 2, 'v': 3, 'w': 1, 'x': 2, 'y': 3, 'z': 4}
letterkeys = {'a': 2, 'b': 2, 'c': 2, 'd': 3, 'e': 3, 'f': 3, 'g': 4, 'h': 4, 'i': 4, 'j': 5, 'k': 5, 'l': 5, 'm': 6, 'n': 6, 'o': 6, 'p': 7, 'q': 7, 'r': 7, 's': 7, 't': 8, 'u': 8, 'v': 8, 'w': 9, 'x': 9, 'y': 9, 'z': 9}

notcompleted = True
outputlist = []

while notcompleted:
  timetaken = 0
  word1 = input()
  word = list(word1)
  if word1 == "halt":
    notcompleted = False
    break
  else:
    for i in range(len(word)):
      try:
        if (word[i+1] == word[i]) or (letterkeys[word[i]] == letterkeys[word[i+1]]):
          timetaken += 2
          timetaken += time[word[i]]
        else:
          timetaken += time[word[i]]
      except IndexError:
        timetaken += time[word[i]]
  outputlist.append(timetaken)

for output in outputlist:
  print(output)
