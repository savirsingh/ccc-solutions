# code by savir singh

n = int(input())
swifts = list(map(int, input().split(" ")))
semaphores = list(map(int, input().split(" ")))
ses = 0
sws = 0

days = 0

for i in range(len(swifts)):
    sws += swifts[i]
    ses += semaphores[i]
    if sws == ses:
        days = i+1

    
print(days)
