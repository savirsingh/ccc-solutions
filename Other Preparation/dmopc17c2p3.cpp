// code by savir singh

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);

// all vars
const int MAX=200000;
vector<int> graph[MAX];
bool visited[MAX];
int dist[MAX];
int closest=1e6;

// bfs function
vector<int> bfs(int node, int end_node)
{
    memset(visited, 0, sizeof(visited));
    deque<int> deq;
    deq.pb(node);
    visited[node]=true;
    map<int, int> pre;
    vector<int> path;
    path.pb(end_node);
    while (!deq.empty()) {
        int curr=deq.front();
        deq.pop_front();
        if (curr==end_node) {
            int a=pre[curr];
            path.pb(a);
            while (a!=node) {
                a=pre[a];
                path.pb(a);
            }
        }
        for (int adj : graph[curr]) {
            if (!visited[adj]) {
                visited[adj]=true;
                deq.pb(adj);
                pre[adj]=curr;
            }
        }
    }
    return path;
}

// driver code
bit32 main()
{
    int n, r; cin >> n >> r;
    vector<int> rabbits(r);
    for (int i=0; i<n-1; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for (int i=0; i<r; i++) {
        cin >> rabbits[i];
    }
    int x, y;
    cin >> x >> y;
    vector<int> path=bfs(x, y);
    memset(visited, 0, sizeof(visited));
    memset(dist, 0, sizeof(dist));
    deque<int> deq;
    for (int rabbit : rabbits) {
        deq.pb(rabbit);
        visited[rabbit]=true;
        dist[rabbit]=0;
    }
    while (!deq.empty()) {
        int curr=deq.front();
        deq.pop_front();
        for (int adj : graph[curr]) {
            if (!visited[adj]) {
                visited[adj]=true;
                dist[adj]=dist[curr]+1;
                deq.pb(adj);
            }
        }
    }
    for (int p : path) {
        closest=min(closest, dist[p]);
    }
    cout << closest;
}
