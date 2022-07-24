# code by savir singh

n = int(input())
me = input().split(" ")
outputlist = []
lowtides = []
hightides = []

measurements = []
copymeasurements = []
highestlowtide = 0

for i in range(n):
    measurements.append(int(me[i]))

copymeasurements = measurements.copy()

for s in range(n//2):
    copymeasurements.remove(max(copymeasurements))

highestlowtide = max(copymeasurements)

for j in range(n):
    if measurements[j] <= highestlowtide:
        lowtides.append(measurements[j])
    elif measurements[j] > highestlowtide:
        hightides.append(measurements[j])

lowtides.sort(reverse=True)
hightides.sort()

for k in range(min(len(lowtides), len(hightides))):
    outputlist.append(lowtides[k])
    outputlist.append(hightides[k])

if lowtides >= hightides:
    for l in range(len(lowtides), len(hightides)):
        outputlist.append(hightides[l])

else:
    for m in range(len(hightides), len(lowtides)):
        outputlist.append(lowtides[m])

if n!= 1:
    print(str(outputlist).replace('[', '').replace(']', '').replace(',', ''))
else:
    print(str(me).replace('[', '').replace(']', '').replace(',', '').replace("'", ""))
