# code by savir singh

line = list(map(int, input().split(" ")))
sofar = [0]
outputlist = []

for i in range(len(line)):
    sofar.append(sofar[-1]+line[i])

outputlist.append(str(sofar).replace("[", "").replace("]", "").replace(",", ""))

sofar[0] += line[0]
for j in range(1, len(sofar)):
    sofar[j] -= line[0]

outputlist.append(str(sofar).replace("[", "").replace("]", "").replace(",", ""))

sofar[0] += line[1]
sofar[1] += line[1]
for j in range(2, len(sofar)):
    sofar[j] -= line[1]

outputlist.append(str(sofar).replace("[", "").replace("]", "").replace(",", ""))

sofar[0] += line[2]
sofar[1] += line[2]
sofar[2] += line[2]
for j in range(3, len(sofar)):
    sofar[j] -= line[2]

outputlist.append(str(sofar).replace("[", "").replace("]", "").replace(",", ""))

sofar[0] += line[3]
sofar[1] += line[3]
sofar[2] += line[3]
sofar[3] += line[3]
for j in range(4, len(sofar)):
    sofar[j] -= line[3]

outputlist.append(str(sofar).replace("[", "").replace("]", "").replace(",", ""))

for output in outputlist:
    print(output)
