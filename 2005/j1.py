# code by savir singh

daytime = int(input())
evening = int(input())
weekend = int(input())
plana = 0
planb = 0

if daytime-100 > 0:
  plana += (daytime-100)*25
plana += evening*15
plana += weekend*20

if daytime-250 > 0:
  planb += (daytime-250)*45
planb += evening*35
planb += weekend*25

print("Plan A costs " + str(plana/100))

print("Plan B costs " + str(planb/100))

if plana < planb:
  print("Plan A is cheapest.")
elif planb < plana:
  print("Plan B is cheapest.")
else:
  print("Plan A and B are the same price.")
