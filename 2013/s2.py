# code by savir singh
# 6/15 with TLE on cccgrader.com

# max weight
max_weight = int(input())

# number of railway cars
carno = int(input())
cars = []
across = 0

# collect remaining input and add to list
for i in range(carno):
    car = int(input())
    cars.append(car)

# get weight of first 4 cars
firstfour = sum(cars[:4])

# stop immediately and look no further
# if first four sum is larger than max weight
if firstfour > max_weight:
    print(across)

# otherwise...
else:
    across = 3
    if len(cars) > 4:
        while sum(cars[:4]) <= max_weight:
            del cars[0]
            across += 1
    else:
        across = len(cars)
    print(across)
