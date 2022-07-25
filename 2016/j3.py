# code by savir singh

def check(a):
    rseq = a.copy()
    rseq.reverse()
    if rseq == a:
        return True
    return False

sequence = list(input())
outputlist = []

substrings = [sequence[i: j] for i in range(len(sequence))
          for j in range(i + 1, len(sequence) + 1)]

subl = list(substrings)

for s in subl:
    if check(s):
        outputlist.append(len(s))
    else:
        outputlist.append(1)

print(max(outputlist))
