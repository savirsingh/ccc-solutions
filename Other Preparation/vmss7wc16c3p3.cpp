// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int n, m, b, q;
const int MAX=2007;
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
    cin >> n >> m >> b >> q;
    for (int i=0; i<m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        graph[x].push_back({y, z});
        graph[y].push_back({x, z});
    }
    for (int i=0; i<q; i++) {
        for (int i=1; i<=n; i++) dist[i]=INT_MAX;
        int a; cin >> a;
        dist[a]=0;
        memset(visited, false, sizeof(visited));
        dijkstra(a);
        if (dist[b]==INT_MAX) cout << -1 << endl;
        else cout << dist[b] << endl;
    }
}
