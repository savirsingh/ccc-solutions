# code by savir singh

notcompleted = True
streets = []
directions = []

while notcompleted:
  direction = input()
  street = input()
  if street != "SCHOOL":
    directions.append(direction)
    streets.append(street)
  else:
    notcompleted = False
    directions.append(direction)

streets.reverse()
directions.reverse()

for d in directions:
  if d == "L":
    directions[directions.index(d)] = "RIGHT"
  if d == "R":
    directions[directions.index(d)] = "LEFT"

streets.append('HOME')

for i in range(len(directions)):
  if streets[i] != 'HOME':
    print("Turn " + str(directions[i] + " onto " + str(streets[i]) + " street."))
  else:
    print("Turn " + str(directions[i] + " into your HOME."))
