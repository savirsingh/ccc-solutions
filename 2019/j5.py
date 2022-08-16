# code by savir singh

from sys import stdin
sub1, d1 = stdin.readline().split()
sub2, d2 = stdin.readline().split()
sub3, d3 = stdin.readline().split()
steps, src, tgt = stdin.readline().split()
steps = int(steps)
setversion = set()

def func(cur, state, moves):
    if cur == 0 and state == tgt:
        return moves
    if cur == 0:
        return False
    label = cur, state
    if label in setversion:
        return False 
    setversion.add(label) 
    for rule, (a, b) in enumerate([(sub1, d1), (sub2, d2), (sub3, d3)], 1):
        l = len(a)
        pos = -1
        while True:
            pos = state.find(a, pos + 1)
            if pos == -1:
                break
            new_state = state[:pos] + b + state[pos + l:]
            output = func(cur - 1, new_state[:], moves + [(rule, pos, new_state)])
            if output:
                return output
    return False
value = func(steps, src, [])
for i, j, k in value:
    print(i, j + 1, k)
