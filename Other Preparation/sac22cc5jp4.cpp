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
const int MAX=2e5+2;
int N;
vector<int> graph[MAX];
bool visited[MAX];
vector<int> lis;

// dfs function
void dfs(int node)
{
    visited[node]=true;
    for (int adj : graph[node]) {
        if (!visited[adj]) {
            dfs(adj);
        }
    }
    lis.pb(node);
}

// driver code
bit32 main()
{
    cin >> N;
    for (int i=1; i<=N; i++) {
        int c; cin >> c;
        for (int j=1; j<=c; j++) {
            int c_i; cin >> c_i;
            graph[c_i].pb(i);
        }
    }
    for (int i=1; i<=N; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
    reverse(lis.begin(), lis.end());
    for (int i=0; i<lis.size(); i++) {
        cout << lis[i];
        if (i!=lis.size()-1) cout << " ";
    }
    cout << "\n";
}
