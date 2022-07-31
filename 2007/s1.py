# code by savir singh

n = int(input())

for i in range(n):
  date1 = input().split(" ")
  year = int(date1[0])
  month = int(date1[1])
  day = int(date1[2])

  if year < 1989:
    print("Yes")
  elif year == 1989 and month < 2:
    print("Yes")
  elif year == 1989 and month <= 2 and day <= 27:
    print("Yes")
  else:
    print("No")
