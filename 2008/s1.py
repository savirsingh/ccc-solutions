# code by savir singh

notcompleted = True
cities = []
temps = []

while notcompleted:
    in1 = input().split(" ")
    city = in1[0]
    temp = int(in1[1])
    cities.append(city)
    temps.append(temp)
    if city == "Waterloo":
        notcompleted = False

mintemp = temps.index(min(temps))

mincit = cities[mintemp]

print(mincit)
