# code by savir singh

year = int(input())
year1 = year
limit = int(input())
years = []

while True:
    year += 60
    if year <= limit:
        years.append(year)
    else:
        break

print("All positions change in year " + str(year1))

for y in years:
    print("All positions change in year " + str(y))
