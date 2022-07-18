# code by savir singh

numberoftimes = int(input())
prime = 0
diffnumber = 0
outputlist = []

def isprime(num):
    if num != 1:
        for n in range(2,int(num**0.5)+1):
            if num%n==0:
                return False
        return True
    else:
        return False

for i in range(numberoftimes):
        
    number = int(input())
    for j in range(number-1):
        if isprime(number+j) == True and isprime(number-j) == True:
            diffnumber = number+j
            break

    outputlist.append(diffnumber)
    if diffnumber > number:
        diffnumber = diffnumber-number
        outputlist.append(number-diffnumber)
    else:
        diffnumber = number-diffnumber
        outputlist.append(number+diffnumber)

for i in range(int(len(outputlist)/2)):
    print(str(outputlist[i]) + " " + str(outputlist[i+1]))
    outputlist.remove(outputlist[i])



