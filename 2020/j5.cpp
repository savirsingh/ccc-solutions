// code by savir singh
// solved using BFS

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

// this is basically just a pair
// but is customized for this problem
class cell {
public:
    int r, c;
};

// all vars
const int MAX=1000008;
vector<cell> graph[MAX];
bool visited[1008][1008];

// driver code
bit32 main()
{
    // scan everything
    int m, n;
    scani(m); scani(n);
    cell fin;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            int a; cin >> a;
            cell b;
            b.r=i; b.c=j;
            graph[a].pb(b);
            if (i==m && j==n) {
                fin=b;
            }
        }
    }
    // implement BFS (backwards, beginning from
    // the last cell in the grid)
    deque<cell> deq;
    deq.pb(fin);
    while (!deq.empty()) {
        cell z=deq.front(); deq.pop_front();
        vector<cell> p = graph[z.r*z.c];
        for (cell adj : p) {
            if (adj.r==1 && adj.c==1) {
                // path possible
                cout << "yes";
                return false;
            }
            else if (!visited[adj.r][adj.c]) {
                visited[adj.r][adj.c]=true;
                deq.pb(adj);
            }
        }
    }
    // path impossible
    cout << "no";
}
