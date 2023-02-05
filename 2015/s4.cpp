// code by savir singh
// And this is when I learned that Dijkstra's doesn't require
// a visited array. Thank you brain.

// idea:
// just 2d dijkstra's where dist[i][j] represents the minimum
// distance to node i when j cm of hull is worn out.
// and then the answer is just min(dist[b][1...k])

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

int k, n, m, a, b;
const int MAX=2007;
int dist[MAX][MAX];

struct Node {
    int id;
    int dist;
    int wear;
    Node(int i, int d, int h) : id(i), dist(d), wear(h) {}
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
        int curId = cur.id;
        if (curId==b) break;
        for (auto x : graph[curId]) {
            int adj=x.id, t=x.dist, h=x.wear;
            int wear=cur.wear+h;
            if (wear<k && cur.dist+t<dist[adj][wear]) {
                dist[adj][wear] = cur.dist+t;
                q.push(Node(adj, cur.dist+t, wear));
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> n >> m;
    for (int i=0; i<m; i++) {
        int a, b, t, h;
        cin >> a >> b >> t >> h;
        graph[a].push_back(Node(b, t, h));
        graph[b].push_back(Node(a, t, h));
    }
    cin >> a >> b;
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=k; j++) {
            dist[i][j]=INT_MAX;
        }
    }
    dist[a][0]=0;
    dijkstra(a);
    int best=INT_MAX;
    for (int i=0; i<k; i++) {
        best=min(best, dist[b][i]);
    }
    if (best==INT_MAX) {cout << -1 << endl; return false;}
    cout << best << endl;
}
