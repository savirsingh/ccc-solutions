// code by savir singh

#include <bits/stdc++.h>
//#define int long long
using namespace std;

const int MAX=1005;
int c, m, n[MAX], k[MAX], dp[MAX][MAX];

// dp state:
// template knapsack,
// dp[i][j] = max value with first i items
// and max weight capacity of j.

int32_t main() {
    cin >> c >> m;
    for (int i=1; i<=c; i++) {
        cin >> n[i] >> k[i];
    }
    for (int i=1; i<=c; i++) {
        for (int j=1; j<=m; j++) {
            if (k[i] <= j) {
                dp[i][j] = max(n[i] + dp[i-1][j-k[i]], dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[c][m] << endl;
}
