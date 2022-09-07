# code by savir singh

# returns TLE cuz Python is slowwwww
# code works fully though
# i might make this algo more efficient later
# check C++ code - it works
# 12/15 points

j = int(input())
a = int(input())
jerseys = []
athletes = []
requests = 0
orders = ['S', 'M', 'L']
taken = []

for i in range(j):
    jer = input()
    jerseys.append(jer)

for c in range(a):
    ath = input().split(" ")
    athletes.append(ath)

for k in range(len(athletes)):
    thejersey = jerseys[int(athletes[k][1])-1]
    correctjersey = athletes[k][0]
    if thejersey == correctjersey or orders.index(thejersey) > orders.index(correctjersey):
        if int(athletes[k][1]) not in taken:
            requests += 1
        taken.append(int(athletes[k][1]))

print(requests)
