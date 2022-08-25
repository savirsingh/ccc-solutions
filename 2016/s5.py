# code by savir singh

# take in input and initialize n, t, 
# initial, and new
in1 = list(map(int, input().split(" ")))
n = in1[0]
t = in1[1]
initial = list(map(int, list(input())))
new = initial.copy()

# loop through t times
for _ in range(t):
    # loop through n times
    for i in range(n):
        # handle if i=0
        if i == 0:
            if initial[-1] == 1 and initial[1] != 1:
                new[0] = 1
            elif initial[-1] != 1 and initial[1] == 1:
                new[0] = 1
            else:
                new[0] = 0
        # handle if i=n-1
        if i == n-1:
            if initial[0] == 1 and initial[n-2] != 1:
                new[-1] = 1
            elif initial[0] != 1 and initial[n-2] == 1:
                new[-1] = 1
            else:
                new[-1] = 0
        # otherwise...
        else:
            if initial[i+1] == 1 and initial[i-1] != 1:
                new[i] = 1
            elif initial[i-1] == 1 and initial[i+1] != 1:
                new[i] = 1
            else:
                new[i] = 0
    # change initial to a copy of new every time
    initial = new.copy()

# output new at the end
print(''.join(list(map(str, new))))
