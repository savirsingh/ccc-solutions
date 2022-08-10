# code by savir singh

n = int(input())
sw = input().split(" ")
se = input().split(" ")
ses = 0
sws = 0

swifts = []
semaphores = []
count = 0
days = 0

for i in range(n):
    swifts.append(int(sw[i]))
    semaphores.append(int(se[i]))

for i in range(len(sw)):
    sws += swifts[i]
    ses += semaphores[i]
    count += 1
    if sws == ses and count == len(swifts):
        days = len(swifts)
    elif sws == ses and count != len(swifts):
        days = i+1

    
print(days)
