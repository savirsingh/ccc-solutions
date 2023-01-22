// code by savir singh

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

const int MAX=2007;
int t, n, m, g;
vector<pair<int, int>> graph[MAX];
vector<int> fb;
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t >> n >> m >> g;
    for (int i=1; i<=g; i++) {
        int a; cin >> a;
        fb.push_back(a+1);
    }
    for (int i=1; i<=m; i++) {
        int a, b, l;
        cin >> a >> b >> l;
        graph[a+1].push_back({b+1, l});
    }
    memset(visited, false, sizeof(visited));
    for (int i=1; i<=n+1; i++) {
        dist[i]=INT_MAX;
    }
    dist[1]=0;
    dijkstra(1);
    int fin=0;
    for (int i : fb) {
        if (dist[i]<t) fin++;
    }
    cout << fin << endl;
}
