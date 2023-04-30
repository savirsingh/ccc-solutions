# code by savir singh
# https://dmoj.ca/problem/wc01p3
# 10/10

def reverse_bits(num):
    binary = bin(num)[2:][::-1]
    print(int(binary, 2))

for _ in range(int(input())):
    reverse_bits(int(input()))
