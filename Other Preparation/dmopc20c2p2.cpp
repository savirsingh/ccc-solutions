// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 1e6+1;
int n, m, f[MM], e[MM], in[MM];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        if (!in[a]) f[a] = i;
        e[a] = max(e[a], i);
        in[a] = 1;
    }
    int best = 0;
    for (int i = 1, a, b; i <= m; i++) {
        cin >> a >> b;
        if (in[a] && in[b]) best = max(best, e[b] - f[a] + 1);
    }
    cout << best << endl;
}
