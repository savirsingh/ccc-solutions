// code by savir singh
// https://dmoj.ca/problem/dmopc13c3p5
// 100/100

#include <bits/stdc++.h>
using namespace std;
const int MAX = 152;
int r, u, m, v[MAX], t[MAX], f[MAX], dp[302][102];

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> u >> r;
    for (int i = 1; i <= r; i++) {
        cin >> v[i] >> t[i] >> f[i];
    }
    for (int i = 1; i <= r; i++) {
        for (int j = m; j >= t[i]; j--) {
            for (int k = u; k >= f[i]; k--) {
                dp[j][k] = max(dp[j][k], dp[j-t[i]][k-f[i]] + v[i]);
            }
        }
    }
    cout << dp[m][u] << endl;
}
