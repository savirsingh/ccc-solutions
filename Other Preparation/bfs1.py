# code by savir singh
# https://volcanojudge.pythonanywhere.com/problem/bfs1
# 100/100

from collections import deque
from collections import defaultdict
for _ in range(int(input())):
    graph=defaultdict(list)
    in1=list(map(int, input().split()))
    N, M=in1[0], in1[1]
    for i in range(M):
        in2=list(map(int, input().split()))
        X, Y=in2[0], in2[1]
        graph[X].append(Y)
        graph[Y].append(X)
    visited=set()
    dist=dict()
    deq=deque([1])
    dist[1]=0
    while deq:
        curr=deq.popleft()
        lvl=dist[curr]
        for adj in graph[curr]:
            if adj not in visited:
                visited.add(adj)
                deq.append(adj)
                dist[adj]=dist[curr]+1
    print(dist[N])
