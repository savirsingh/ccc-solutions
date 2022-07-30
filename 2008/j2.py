# code by savir singh

notcompleted = True
playlist = ['A', 'B', 'C', 'D', 'E']

while notcompleted:
    b = int(input())
    n = int(input())

    for i in range(n):
        if b == 1:
            playlist.append(playlist[0])
            del playlist[0]
        elif b == 2:
            playlist.insert(0, playlist[-1])
            del playlist[-1]
        elif b == 3:
            playlist.insert(0, playlist[1])
            del playlist[2]
        else:
            notcompleted = False

for song in playlist:
    print(song, end=' ')
