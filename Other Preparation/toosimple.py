# code by savir singh
# https://dmoj.ca/problem/toosimple
# 100/100

val=True
forh = val + val
forh *= (val+val+val)
forh *= (val+val) * (val+val+val)
forh *= (val+val)
first=forh
forh = val+val
forh *= forh
forh *= forh
forh *= (val+val+val+val+val+val)
forh += (val+val)*(val+val+val)
forh -= val
second=forh
forh = (val+val+val)**(val+val)
forh *= (val+val+val)*(val+val+val+val)
third=forh
fourth=forh
forh += val+val+val
valll=forh
fifth=forh
forh = val+val+val+val
forh *= val+val+val+val+val+val+val+val+val+val+val
sixth=forh
vall = forh
forh = val+val
forh **= (val+val+val+val+val)
seventh=forh
forh = vall * (val+val)
forh -= val
eighth=forh
eleventh=valll
twelfth=valll+val+val+val
thirteenth=valll-val-val-val
forh = val+val+val+val+val
forh *= (val+val)
forh *= forh
fourteenth=forh
forh = val+val
forh **= (val+val+val+val+val)
forh += val
fifteenth=forh
print(chr(first)+chr(second)+chr(third)+chr(fourth)+chr(fifth)+chr(sixth)+chr(seventh)+chr(eighth)+chr(eleventh)+chr(twelfth)+chr(thirteenth)+chr(fourteenth)+chr(fifteenth))
