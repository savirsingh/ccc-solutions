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
const int MAX=400;

// driver code
bit32 main()
{
    int t; cin >> t;
    while (t--) {
        char graph[MAX][MAX];
        int dist[MAX][MAX];
        int r, c; cin >> r >> c;
        for (int i=0; i<r; i++) {
            for (int j=0; j<c; j++) {
                char a; cin >> a;
                graph[i][j]=a;
                dist[i][j]=-1;
            }
        }
        deque<pii> deq;
        deq.pb({0, 0});
        dist[0][0]=1;
        while (!deq.empty()) {
            pii curr=deq.front();
            int lvl=dist[curr.first][curr.second];
            deq.pop_front();
            char cur=graph[curr.first][curr.second];
            vector<pii> p;
            if (cur=='+') {
                p = {{curr.first+1, curr.second}, {curr.first-1, curr.second}, {curr.first, curr.second+1}, {curr.first, curr.second-1}};
            }
            else if (cur=='-') {
                p = {{curr.first, curr.second+1}, {curr.first, curr.second-1}};
            }
            else if (cur=='|') {
                p = {{curr.first+1, curr.second}, {curr.first-1, curr.second}};
            }
            for (pii adj : p) {
                if (adj.first<0 || adj.first>=r || adj.second<0 || adj.second>=c || dist[adj.first][adj.second]!=-1 || graph[adj.first][adj.second]=='*') {
                    continue;
                }
                dist[adj.first][adj.second]=lvl+1;
                deq.pb({adj.first, adj.second});
            }
        }
        if (graph[r-1][c-1]=='*') {
            cout << -1 << "\n";
        }
        else {
            cout << dist[r-1][c-1] << "\n";
        }
    }
}
