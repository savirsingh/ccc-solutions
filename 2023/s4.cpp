// code by savir singh

#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;

const int MAX = 2007;
int dist[MAX][MAX], dist2[MAX][MAX];
bool removed[MAX];
int n, m;

struct edge {
    int u;
    int v;
    int cost;
    int num;
};

bool operator<(const edge &a, const edge &b) {
    return a.cost > b.cost;
}

bool operator>(const edge &a, const edge &b) {
    return a.cost < b.cost;
}

struct Node {
    int id;
    int dist;
    int num;
    Node(int i, int d, int n) : id(i), dist(d), num(n) {}
};

bool operator<(const Node &a, const Node &b) {
    return a.dist < b.dist;
}

bool operator>(const Node &a, const Node &b) {
    return a.dist > b.dist;
}

vector<Node> graph[MAX];

void dijkstra(int node) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        for (auto [adj, w, num] : graph[cur.id]) {
            if (dist[node][adj] > dist[node][cur.id] + w) {
                dist[node][adj] = dist[node][cur.id] + w;
                q.push(Node(adj, dist[node][adj], 0));
            }
        }
    }
}

void dijkstra2(int node, int no_use) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        for (auto [adj, w, num] : graph[cur.id]) {
            if (num == no_use || removed[num]) continue;
            if (dist2[node][adj] > dist2[node][cur.id] + w) {
                dist2[node][adj] = dist2[node][cur.id] + w;
                q.push(Node(adj, dist2[node][adj], 0));
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    vector<edge> edges;
    int cost = 0;
    memset(removed, false, sizeof removed);
    for (int i=1; i<=m; i++) {
        int u, v, l, c;
        cin >> u >> v >> l >> c;
        graph[u].push_back({v, l, i});
        graph[v].push_back({u, l, i});
        edges.push_back({u, v, c, i});
        cost += c;
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            dist[i][j] = 1e18;
            dist2[i][j] = 1e18;
        }
    }
    for (int i=1; i<=n; i++) {
        dist[i][i] = 0;
        dijkstra(i);
    }
    sort(edges.begin(), edges.end());
    for (edge e : edges) {
        int u = e.u, v = e.v, w = e.cost, num = e.num;
        dist2[u][u] = 0;
        dijkstra2(u, num);
        int co = 0;
        for (int i=1; i<=n; i++) {
            if (dist[u][i] == dist2[u][i]) {
                co++;
            }
            //cout << dist[u][i] << " " << dist2[u][i] << endl;
        }
        if (co == n) {
            cost -= w;
            removed[num] = true;
        }
        //break;
        for (int i=1; i<=n; i++) {
            dist2[u][i] = 1e18;
        }
    }
    cout << cost << endl;
}
