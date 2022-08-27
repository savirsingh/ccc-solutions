# code by savir singh
# 15/15 on DMOJ & CCC Grader

# check if prime
def checkprime(num):
    if num==1:
        return False
    if num==0:
        return False
    for z in range(2, int(num**0.5)+1):
        if (num%z) == 0:
            return False
    return True

# no. of test cases
t = int(input())

# loop through and begin the magic!
for i in range(t):
    n = int(input())
    a = n+1
    b = n-1
    while True:
        if checkprime(a) and checkprime(b):
            print(b, a)
            break
        a+=1
        b-=1
    
