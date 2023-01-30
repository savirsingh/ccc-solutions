// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

const int MAX=1e5+2;
int n, m, k, a, b;
vector<int> gift;
vector<int> graph[MAX];
int dist[MAX];
int dist2[MAX];
bool visited[MAX];

void bfs(int node) {
    deque<int> deq;
    deq.push_back(node);
    visited[node]=true;
    dist[node]=0;
    while (!deq.empty()) {
        int cur=deq.front();
        deq.pop_front();
        for (int adj : graph[cur]) {
            if (visited[adj]) continue;
            visited[adj]=true;
            dist[adj]=dist[cur]+1;
            deq.push_back(adj);
        }
    }
}

void bfs2(int node) {
    deque<int> deq;
    deq.push_back(node);
    visited[node]=true;
    dist2[node]=0;
    while (!deq.empty()) {
        int cur=deq.front();
        deq.pop_front();
        for (int adj : graph[cur]) {
            if (visited[adj]) continue;
            visited[adj]=true;
            dist2[adj]=dist2[cur]+1;
            deq.push_back(adj);
        }
    }
}

int32_t main(){
    scan(n); scan(m); scan(k); scan(a); scan(b);
    for (int i=1; i<=k; i++) {int o; scan(o); gift.push_back(o);}
    for (int i=1; i<=m; i++) {
        int u, v; scan(u); scan(v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    memset(visited, false, sizeof visited);
    for (int i=1; i<=n; i++) {dist[i]=0; dist2[i]=0;}
    bfs(a);
    memset(visited, false, sizeof visited);
    bfs2(b);
    int best=1e18;
    for (auto x : gift) {
        int distance=dist[x]+dist2[x];
        best=min(best, distance);
    }
    cout << best << endl;
}
