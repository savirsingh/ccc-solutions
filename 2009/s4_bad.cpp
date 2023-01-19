// code by savir singh
// bad version of s4
// correct algorithm, produces correct results
// however too slow
// see s4.cpp for full solution

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

int n, m;
const int MAX=5008;
vector<pair<int, int>> graph[MAX];
int dist[MAX];
bool visited[MAX];

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
        tries.push_back({z, pz});
    }
    int d; scan(d);
    vector<int> dists;
    for (auto x : tries) {
        memset(visited, false, sizeof(visited));
        memset(dist, 0, sizeof(dist));
        for (int i=1; i<=n; i++) dist[i]=INT_MAX;
        dist[x.first]=0;
        dijkstra(x.first);
        dists.push_back(dist[d]+x.second);
    }
    cout << *min_element(dists.begin(), dists.end()) << endl;
}
