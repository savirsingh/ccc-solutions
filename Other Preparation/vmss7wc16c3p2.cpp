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
const int MAX = 2001;
int n,m,a,b,x,y;
bool adj[MAX][MAX];
bool visited[MAX];
void dfs(int s)
{
    visited[s] = true;
    for (int j = 1; j <= n; j++)
    {
        if (adj[s][j]&&!visited[j])
            dfs(j);
    }
}
bit32 main()
{
    scani(n); scani(m);
    scani(a); scani(b);
    for (int i = 0 ; i < m; i++) {
        scani(x); scani(y);
        adj[x][y] = true; adj[y][x] = true;
    }
    dfs(a);
    if (visited[b]) {
        print("GO SHAHIR!");
    }
    else {
        print("NO SHAHIR!");
    }
}
