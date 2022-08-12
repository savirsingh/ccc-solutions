# code by savir singh
# gives TLE - look at C++ Solution
# 7/15

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

for j in range(n):
    mintime = min(times)
    tindex = times.index(mintime)
    thedis = distances[tindex]
    sortedtimes.append(mintime)
    sorteddistances.append(thedis)
    del times[tindex]
    del distances[tindex]

for k in range(n-1):
    disdiff = abs(sorteddistances[k+1]-sorteddistances[k])
    timediff = abs(sortedtimes[k+1]-sortedtimes[k])
    difference = float(disdiff/timediff)
    speeds.append(difference)

print(max(speeds))
