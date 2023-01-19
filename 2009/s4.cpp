// code by savir singh

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

int n, m;
const int MAX=5008;
vector<pair<int, int>> graph[MAX];
int dist[MAX];
bool visited[MAX];
bool pencil[MAX];
map<int, int> extra;

struct Node {
    int id;
    int dist;
    Node(int i, int d) : id(i), dist(d) {}
};

bool operator<(const Node &a, const Node &b) {
    return a.dist > b.dist;
}
bool operator>(const Node &a, const Node &b) {
    return a.dist > b.dist;
}

void dijkstra(int node) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        int curId = cur.id;
        if (visited[curId]) continue;
        visited[curId] = true;
        for (auto [adj, w] : graph[curId]) {
            if (dist[adj] > dist[curId] + w) {
                dist[adj] = dist[curId] + w;
                q.push(Node(adj, dist[adj]));
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scan(n); scan(m);
    for (int i=0; i<m; i++) {
        int x, y, cost;
        scan(x); scan(y); scan(cost);
        graph[x].push_back({y, cost});
        graph[y].push_back({x, cost});
    }
    int k; scan(k);
    vector<pair<int, int>> tries;
    for (int i=0; i<k; i++) {
        int z, pz;
        scan(z); scan(pz);
        pencil[z]=true;
        extra[z]=pz;
    }
    int d; scan(d);
    memset(visited, false, sizeof(visited));
    for (int i=1; i<=n; i++) dist[i]=INT_MAX;
    dist[d]=0;
    dijkstra(d);
    int min_dist=INT_MAX;
    for (int i=1; i<=n; i++) {
        if (!pencil[i]) continue;
        //if (dist[i]==0) cout << "DIST: " << i << endl;
        min_dist=min(min_dist, dist[i] + extra[i]);
    }
    cout << min_dist << endl;
}
