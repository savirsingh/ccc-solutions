# code by savir singh
# 15/15 points

n = int(input())
times = []
distances = []
sortedtimes = []
sorteddistances = []
speeds = []

for i in range(n):
    a = list(map(int, input().split(" ")))
    times.append(a[0])
    distances.append(a[1])

sortedtimes, sorteddistances = zip(*sorted(zip(times, distances)))

for j in range(n-1):
    disdiff = abs(sorteddistances[j+1]-sorteddistances[j])
    timediff = abs(sortedtimes[j+1]-sortedtimes[j])
    difference = float(disdiff/timediff)
    speeds.append(difference)

print(max(speeds))

