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
const int MAX=1003;
char graph[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];

// driver code
bit32 main()
{
    int n, m;
    cin >> n >> m;
    pii s, e;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            char a; cin >> a;
            pii b; b.first=i; b.second=j;
            if (a=='s') {s=b;}
            else if (a=='e') {e=b;}
            graph[i][j] = a;
        }
    }
    deque<pii> deq;
    deq.pb(s);
    visited[s.first][s.second]=true;
    dist[s.first][s.second]=0;
    while (!deq.empty()) {
        pii curr=deq.front(); deq.pop_front();
        int d=dist[curr.first][curr.second];
        vector<pii> p={{curr.first+1, curr.second}, {curr.first-1, curr.second}, {curr.first, curr.second+1}, {curr.first, curr.second-1}};
        for (pii adj : p) {
            if (adj.first<=0 || adj.first>n || adj.second<=0 || adj.second>m || visited[adj.first][adj.second] || graph[adj.first][adj.second]=='X') {
                continue;
            }
            visited[adj.first][adj.second]=true;
            dist[adj.first][adj.second]=d+1;
            deq.pb({adj.first, adj.second});
        }
    }
    int fin=dist[e.first][e.second];
    if (fin==-1) {cout<<-1;}
    else {cout<<fin-1;}
}
