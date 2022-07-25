# code by savir singh

month = int(input())
day = int(input())

if month < 2:
    print("Before")
if month > 2:
    print("After")
if month == 2 and day > 18:
    print("After")
if month == 2 and day < 18:
    print("Before")

if month == 2 and day == 18:
    print("Special")
