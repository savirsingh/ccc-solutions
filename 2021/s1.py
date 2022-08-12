# code by savir singh

n = int(input())
heights = list(map(float, input().split(" ")))
widths = list(map(float, input().split(" ")))
area = float(0)

for i in range(n):
    area += (widths[i]*(heights[i] + heights[i+1]))/2

print(area)
