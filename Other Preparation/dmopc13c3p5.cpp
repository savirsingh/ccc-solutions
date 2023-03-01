// code by savir singh

#include <bits/stdc++.h>
using namespace std;
const int MAX = 152;
int r, u, m, v[MAX], t[MAX], f[MAX], dp[MAX][302][102];

int main() {
    iostream::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> u >> r;
    for (int i = 1; i <= r; i++) {
        cin >> v[i] >> t[i] >> f[i];
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= u; k++) {
                dp[i][j][k] = dp[i-1][j][k];
                if (t[i] <= j && f[i] <= k) {
                    dp[i][j][k] = max(dp[i][j][k], dp[i-1][j-t[i]][k-f[i]] + v[i]);
                }
            }
        }
    }
    cout << dp[r][m][u] << endl;
}
