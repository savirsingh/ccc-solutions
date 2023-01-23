// code by savir singh

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
#define int long long
char _;
using namespace std;

int n, m, d;
const int MAX=500008;
vector<pair<int, int>> graph[MAX];
vector<pair<int, int>> graph2[MAX];
bool visited[MAX];
int dist1[MAX], dist2[MAX];

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

void dijkstra1(int node) {
    priority_queue<Node, vector<Node>, greater<Node>> q;
    q.push(Node(node, 0));
    while (!q.empty()) {
        Node cur = q.top();
        q.pop();
        int curId = cur.id;
        if (visited[curId]) continue;
        visited[curId] = true;
        for (auto [adj, w] : graph[curId]) {
            if (dist1[adj] > dist1[curId] + w) {
                dist1[adj] = dist1[curId] + w;
                q.push(Node(adj, dist1[adj]));
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
        if (visited[curId]) continue;
        visited[curId] = true;
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
        int a, b, k;
        cin >> a >> b >> k;
        graph[a].push_back({b, k});
        graph2[b].push_back({a, k});
    }
    for (int i=1; i<=n; i++) {
        dist1[i]=1e18;
        dist2[i]=1e18;
    }
    dist1[1]=0;
    memset(visited, false, sizeof(visited));
    dijkstra1(1);
    dist2[n]=0;
    memset(visited, false, sizeof(visited));
    dijkstra2(n);
    cin >> d;
    int best=1e18;
    for (int i=0; i<d; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        best=min(best, dist1[a]+g+dist2[b]);
    }
    if (best==1e18 && dist1[n]==1e18) {cout << -1 << endl; return false;}
    best=min(best, dist1[n]);
    cout << best << endl;
}
