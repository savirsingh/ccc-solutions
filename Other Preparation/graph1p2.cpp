// code by savir singh
// https://dmoj.ca/problem/graph1p2
// 50/50

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
const int MAX=103;
vector<int> adj[MAX];
int dist[MAX];
bool visited[MAX];

// driver code
bit32 main()
{
    int n;
    scani(n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int a; cin >> a;
            if (a==1) {
                adj[i].pb(j);
            }
        }
    }
    // implement bfs
    deque<int> deq;
    deq.pb(1);
    visited[1]=true;
    dist[1]=0;
    while (!deq.empty()) {
        int curr=deq.front(); deq.pop_front();
        for (int nxt : adj[curr]) {
            if (!visited[nxt]) {
                visited[nxt]=true;
                dist[nxt]=dist[curr]+1;
                deq.pb(nxt);
            }
        }
    }
    // output distance of node n
    cout << dist[n];
}
