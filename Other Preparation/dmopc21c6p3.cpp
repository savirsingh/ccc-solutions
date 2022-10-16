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
#define pii pair<int, int>

// all vars
const int MAX=1503;
int graph[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];

// driver code
bit32 main()
{
    int n, m, k; cin >> n >> m >> k;
    deque<pii> deq;
    deque<pair<int, pii>> deq_;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            int c; cin >> c;
            graph[i][j]=c;
            if (c!=0) {
                pair<int, pii> pip = {c, {i, j}};
                deq_.pb(pip);
            }
        }
    }
    sort(deq_.begin(), deq_.end());
    for (pair<int, pii> pip : deq_) {
        deq.pb(pip.second);
        pii p=pip.second;
        int x=p.first;
        int y=p.second;
        visited[x][y]=true;
        dist[x][y]=0;
    }
    while (!deq.empty()) {
        pii curr=deq.front();
        deq.pop_front();
        if (dist[curr.first][curr.second]==k) {
            break;
        }
        vector<pii> p = {{curr.first-1, curr.second}, {curr.first+1, curr.second}, {curr.first, curr.second+1}, {curr.first, curr.second-1}};
        for (pii adj : p) {
            if (adj.first<1 || adj.first>n || adj.second<1 || adj.second>m || graph[adj.first][adj.second]!=0 || visited[adj.first][adj.second]) {
                continue;
            }
            visited[adj.first][adj.second]=true;
            graph[adj.first][adj.second]=graph[curr.first][curr.second];
            dist[adj.first][adj.second]=dist[curr.first][curr.second]+1;
            deq.pb({adj.first, adj.second});
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
}
