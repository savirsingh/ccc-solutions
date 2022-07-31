# code by savir singh

def findFactors(x):
  global factors
  for i in range(1, x + 1):
    if x % i == 0:
      factors.append(i)

lower = int(input())
higher = int(input())
rsa = []

for s in range(lower, higher+1):
  factors = []
  findFactors(s)
  if len(factors) == 4:
    rsa.append(s)

print("The number of RSA numbers between " + str(lower) + " and " + str(higher) + " is " + str(len(rsa)))
