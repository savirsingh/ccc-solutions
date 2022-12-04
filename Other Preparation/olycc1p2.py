# code by savir singh
# https://volcanojudge.pythonanywhere.com/problem/olycc1p2
# 100/100

def dfs(node):
    global visited
    global graph
    if node in visited:
        return
    visited.add(node)
    for adj in graph[node]:
        dfs(adj)

from collections import defaultdict
visited=set()
graph=defaultdict(list)
for _ in range(3):
    visited.clear()
    graph.clear()
    in1=list(map(int, input().split()))
    N, E=in1[0], in1[1]
    for i in range(E):
        in2=list(map(int, input().split()))
        X, Y=in2[0], in2[1]
        graph[X].append(Y)
    dfs(1)
    if N in visited:
        print("yes")
    else:
        print("no")
    
