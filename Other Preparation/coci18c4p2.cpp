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
const int MAX=1e5+2;
vector<int> graph[MAX];
bool visited[MAX];
int c=0;

// dfs function
void dfs(int node)
{
    if (visited[node] && node!=1) return;
    if (c>0) visited[node]=true;
    c++;
    vector<int> neighbours=graph[node];
    for (int adj : neighbours) {
        dfs(adj);
    }
}

// driver code
bit32 main()
{
    int n, m; cin >> n >> m;
    while (m--) {
        int x, y; cin >> x >> y;
        graph[y].pb(x);
    }
    dfs(1);
    for (int i=1; i<=n; i++) {
        if (i==1 && graph[i].size()==0) visited[i]=true;
        cout << visited[i];
    }
}
