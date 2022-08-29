# code by savir singh
# https://dmoj.ca/problem/a2
# 300/300

print("Ready")
while True:
    pair = input()
    if pair == '  ' or pair == ' ':
        break
    elif 'p' in pair and 'q' in pair:
        print("Mirrored pair")
    elif 'b' in pair and 'd' in pair:
        print("Mirrored pair")
    else:
        print("Ordinary pair")
