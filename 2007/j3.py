# code by savir singh

amounts = {
    1: 100,
    2: 500,
    3: 1000,
    4: 5000,
    5: 10000,
    6: 25000,
    7: 50000,
    8: 100000,
    9: 500000,
    10: 1000000
}

n = int(input())
eliminated = []
notcompleted = True
offer = 0
avamounts = 0

while notcompleted:
    in1 = int(input())
    if in1 <= 10 and in1 >= 1:
        eliminated.append(in1)
    else:
        offer = in1
        notcompleted = False

for i in range(len(eliminated)):
    del amounts[eliminated[i]]

avamounts = sum(amounts.values())/len(amounts.values())

if avamounts < offer:
    print("deal")
else:
    print("no deal")
