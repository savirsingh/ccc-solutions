// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1005;
int n, t, v[MAX], h[MAX], dp[MAX][MAX];

int32_t main() {
    cin >> n >> t;
    for (int i=1; i<=n; i++) {
        cin >> v[i] >> h[i];
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=t; j++) {
            if (h[i] <= j) {
                dp[i][j] = max(v[i] + dp[i-1][j-h[i]], dp[i-1][j]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][t] << endl;
}
