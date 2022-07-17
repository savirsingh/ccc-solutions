# code by savir singh

num_l = 0
num_m = 0
misplaced_l = 0
misplaced_m = 0
m_in_l = 0
l_in_m = 0


shelf = input()

for i in range(len(shelf)):
    if shelf[i] == "L":
        num_l += 1
    elif shelf[i] == "M":
        num_m += 1

for i in range(0, num_l):
    if shelf[i] == "M":
        m_in_l += 1
        misplaced_l += 1
    elif shelf[i] == "S":
        misplaced_l += 1

for i in range(num_l, num_l + num_m):
    if shelf[i] == "L":
        l_in_m += 1
        misplaced_m += 1
    elif shelf[i] == "S":
        misplaced_m += 1

print(misplaced_l + misplaced_m - min(m_in_l, l_in_m))
