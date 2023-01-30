// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

struct Node {
    int id;
    int dist;
    Node(int i, int d) : id(i), dist(d) {}
};

bool operator<(const Node &a, const Node &b) {
    return a.dist < b.dist;
}
bool operator>(const Node &a, const Node &b) {
    return a.dist > b.dist;
}

const int MAX=1e5+2;
int n, m;
vector<Node> graph[MAX];
int dist[MAX], danger[MAX];

void spfa(int node) {
    queue<int> q;
    q.push(node);
    dist[node] = 0;
    danger[node] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto [adj, w]: graph[cur]) {
            if (danger[adj] > danger[cur] + w || (danger[adj] == danger[cur] + w && dist[adj] > dist[cur] + 1)) {
                danger[adj] = danger[cur] + w;
                dist[adj] = dist[cur] + 1;
                q.push(adj);
            }
        }
    }
}


int32_t main(){
    scan(n); scan(m);
    for (int i=1; i<=m; i++) {
        int a, b, t;
        scan(a); scan(b); scan(t);
        graph[a].push_back(Node(b, t));
        graph[b].push_back(Node(a, t));
    }
    for (int i=1; i<=n; i++) {
        danger[i]=INT_MAX;
        dist[i]=INT_MAX;
    }
    dist[1]=0;
    danger[1]=0;
    spfa(1);
    if (dist[n]==INT_MAX) {cout << -1 << endl; return false;}
    cout << danger[n] << " " << dist[n] << endl;
}
