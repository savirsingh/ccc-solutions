word = input()
word = 'A'+word+'e'
key_array = ['ABCDEF','GHIJKL','MNOPQR','STUVWX','YZ -.e']
cd = []
for i in range(len(word)):
    let = word[i]
    for j in range(len(key_array)):
        if let in key_array[j]:
            x = j+1
            y = key_array[j].index(word[i])+1
            cd.append((x,y))
steps = 0
for j in range(len(cd)-1):
    steps+=abs(cd[j+1][0]-cd[j][0])
    steps+=abs(cd[j+1][1]-cd[j][1])
print(steps)
