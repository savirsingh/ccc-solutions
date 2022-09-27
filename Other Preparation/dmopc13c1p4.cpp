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

const int MAX=100;
const int INF=1e9;

// driver code
bit32 main()
{
    int t;
    cin >> t;
    while (t--) {
        char graph[MAX][MAX];
        bool visited[MAX][MAX];
        int dist[MAX][MAX];
        memset(dist, 0x3f, sizeof(dist));
        memset(visited, false, sizeof(visited));
        int l, w;
        cin >> l >> w;
        pii s, e;
        for (int i=1; i<=w; i++) {
            for (int j=1; j<=l; j++) {
                char a; cin >> a;
                graph[i][j]=a;
                if (a=='C') {s={i, j};}
                else if (a=='W') {e={i, j};}
            }
        }
        deque<pii> deq;
        deq.pb(s);
        visited[s.first][s.second]=true;
        dist[s.first][s.second]=0;
        while (!deq.empty()) {
            pii curr=deq.front(); deq.pop_front();
            int lvl=dist[curr.first][curr.second];
            vector<pii> p={{curr.first+1, curr.second}, {curr.first-1, curr.second}, {curr.first, curr.second+1}, {curr.first, curr.second-1}};
            for (pii adj : p) {
                if (adj.first<=0 || adj.first>w || adj.second<=0 || adj.second>l || visited[adj.first][adj.second] || graph[adj.first][adj.second]=='X') {
                    continue;
                }
                visited[adj.first][adj.second]=true;
                dist[adj.first][adj.second]=lvl+1;
                deq.pb({adj.first, adj.second});
            }
        }
        int fin=dist[e.first][e.second];
        if (fin<60) {
            cout << fin << "\n";
        }
        else {
            cout << "#notworth" << "\n";
        }
    }
}
