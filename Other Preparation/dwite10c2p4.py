# code by savir singh
# https://dmoj.ca/problem/dwite10c2p4
# 1/1

def conv(N, D):
    result = ""
    if N * D < 0:
        result += "-"
        
    N, D = abs(N), abs(D)
    result += str(N // D)
    remainder = N % D
    
    #if remainder is zero, there's no repeating part
    if remainder == 0:
        return result
    result += "."
    remainder_map = {}
    position = len(result)
    
    while remainder != 0:
        if remainder in remainder_map:
            #found repeating remainder, insert parentheses and break
            result = result[:remainder_map[remainder]] + "(" + result[remainder_map[remainder]:] + ")"
            break
        else:
            #store remainder and its position
            remainder_map[remainder] = position
            position += 1
            digit, remainder = divmod(remainder * 10, D)
            result += str(digit)
    
    return result

for _ in range(5):
    N, D = map(int, input().split())
    result = conv(N, D)
    print(result)
