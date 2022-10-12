// code by savir singh
// https://dmoj.ca/problem/dwite09c1p5
// 10/10

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
const int MAX=200;

// dfs function
int dfs(int node, vector<int> graph[], vector<int> visited)
{
    visited.pb(node);
    int fin=0;
    for (int adj : graph[node]) {
        if (find(visited.begin(), visited.end(), adj)!=visited.end()) {
            auto it=find(visited.begin(), visited.end(), adj);
            int index=distance(visited.begin(), it);
            return visited.size()-index;
        }
        fin=max(fin, dfs(adj, graph, visited));
    }
    return fin;
}

// driver code
bit32 main()
{
    int t=5;
    while (t--) {
        int n; cin >> n;
        vector<int> graph[MAX];
        vector<int> visited;
        for (int i=0; i<n; i++) {
            int a, b;
            cin >> a >> b;
            graph[a].pb(b);
        }
        cout << dfs(1, graph, visited) << endl;
    }
}
