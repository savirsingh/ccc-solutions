# code by savir singh
# https://dmoj.ca/problem/dmopc21c1p1
# 100/100

n = int(input())
stones = list(map(int, input().split()))

duke_turns = sum(s // 2 for s in stones if s % 2 == 0)
alice_turns = sum((s + 1) // 2 for s in stones if s % 2 == 1)

if duke_turns > alice_turns:
    print("Duke")
else:
    print("Alice")
