def func1(duration):
    times = []
    timee = 0
    global time
    sequences = 0
    adder = 0
    for j in range(duration + int(duration/90)*2+3):
        times.append(time + adder)
        if str(timee)[-2:] == "60":
            if int(timee/100) == 12:
                timee = 100
                time = 100
                adder = 0
                times.pop()
                times.pop()
                continue
            else:
                timee += 40
                time += 100
                adder = 0
                times.pop()
                times.pop()
                continue
        else:
            timee = time + adder
        adder += 1
    for k in range(len(times)):
        timel = list(map(int, list(str(times[k]))))
        if len(timel) == 4:
            if timel[3]-timel[2] == timel[3]-timel[2] == timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
        else:
            if timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
    return sequences

duration = int(input())
sequences = 0

time = 1200

if duration < 60:
    for i in range(duration):
        time += 1
        timel = list(map(int, list(str(time))))
        if len(timel) == 4:
            if timel[3]-timel[2] == timel[3]-timel[2] == timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
        else:
            # i know this case isn't possible, but why not lol
            if timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
                
elif duration < 720:
    times = []
    timee = 0
    adder = 0
    for j in range(duration + int(duration/90)*2+10):
        times.append(time + adder)
        if str(timee)[-2:] == "60":
            if int(timee/100) == 12:
                timee = 100
                time = 100
                adder = 0
                times.pop()
                times.pop()
                continue
            else:
                timee += 40
                time += 100
                adder = 0
                times.pop()
                times.pop()
                continue
        else:
            timee = time + adder
        adder += 1
    for k in range(len(times)):
        timel = list(map(int, list(str(times[k]))))
        if len(timel) == 4:
            if timel[3]-timel[2] == timel[3]-timel[2] == timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
        else:
            if timel[2]-timel[1] == timel[1]-timel[0]:
                sequences += 1
else:
    sequences = (31*(duration//720))+func1(duration%720)

print(sequences)
