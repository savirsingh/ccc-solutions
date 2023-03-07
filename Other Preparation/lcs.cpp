// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e3+2;

int n, m, dp[MAX][MAX], one[MAX], two[MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> one[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> two[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (one[i] == two[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[n][m] << endl;
}
