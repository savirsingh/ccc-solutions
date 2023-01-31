// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

const int MAX=308;
int n, m, t;
int graph[MAX][MAX];

void floydWarshall() {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                graph[i][j] = min(graph[i][j], max(graph[i][k], graph[k][j]));
            }
        }
    }
}

int32_t main() {
    scan(n); scan(m); scan(t);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            graph[i][j]=1e18;
        }
    }
    for (int i=1; i<=m; i++) {
        int s, e, h;
        scan(s); scan(e); scan(h);
        graph[s][e]=h;
    }
    floydWarshall();
    while (t--) {
        int a, b;
        scan(a); scan(b);
        if (graph[a][b] >= 1e18) {
            cout << -1 << endl;
        } else {
            cout << graph[a][b] << endl;
        }
    }
}
