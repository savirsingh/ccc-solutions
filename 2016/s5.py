# code by savir singh
# 15/15 on DMOJ & CCC Grader

in1 = list(map(int, input().split(" ")))
n = in1[0]
t = in1[1]
line = input()

split = list(reversed(bin(t)[2:]))

def xor(s1, s2):
  out = []
  for c1, c2 in zip(s1, s2):
    if c1 != c2:
      out.append('1')
    else:
      out.append('0')
  return ''.join(out)

for i in range(len(split)):
  if split[i] == '1':
    k = 2 ** i
    left_shift = line[k % len(line):] + line[:k % len(line)]
    right_shift = line[-k % len(line):] + line[:-k % len(line)]
    line = xor(left_shift, right_shift)

print(line)
