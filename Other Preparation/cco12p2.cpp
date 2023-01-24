// code by savir singh
// bro i missed #define int long long
// :sob:

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define int long long
using namespace std;

int n, m;
const int MAX=20008;

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

vector<pair<int, Node>> edges;
vector<Node> graph[MAX];
vector<Node> graph2[MAX];
int dist[MAX];
int dist2[MAX];

void dijkstra(int node) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        int curId = cur.id;
        for (auto [adj, w] : graph[curId]) {
            if (dist[adj] > dist[curId] + w) {
                dist[adj] = dist[curId] + w;
                q.push(Node(adj, dist[adj]));
            }
        }
    }
}

void dijkstra2(int node) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        int curId = cur.id;
        for (auto [adj, w] : graph2[curId]) {
            if (dist2[adj] > dist2[curId] + w) {
                dist2[adj] = dist2[curId] + w;
                q.push(Node(adj, dist2[adj]));
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        graph[a].push_back(Node(b, w));
        graph2[b].push_back(Node(a, w));
        edges.push_back({a, Node(b, w)});
    }
    for (int i=1; i<=n; i++) {
        dist[i]=INT_MAX;
        dist2[i]=INT_MAX;
    }
    dist[1]=0;
    dist2[n]=0;
    dijkstra(1);
    dijkstra2(n);
    int best=INT_MAX;
    for (auto edge : edges) {
        int distance=dist[edge.first]+dist2[edge.second.id]+edge.second.dist;
        if (distance>dist[n] && distance<best) {
            best=distance;
        }
    }
    if (best==INT_MAX) {cout << -1 << endl; return false;}
    cout << best << endl;
}
