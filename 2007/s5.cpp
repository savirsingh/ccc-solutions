// code by savir singh
// dp approach

#include <bits/stdc++.h>
using namespace std;

const int MAX = 30005;

int n, k, w;
int val[MAX], s[MAX], dp[505][MAX];

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(dp, 0, sizeof dp);
        memset(val, 0, sizeof val);
        memset(s, 0, sizeof s);
        cin >> n >> k >> w;
        for (int i = 0; i < n; i++) {
            cin >> val[i];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < w && i - j >= 0; j++) {
                s[i] += val[i - j];
            }
        }
        for (int i = 1; i <= k; i++) {
            dp[i][0] = val[0];
        }
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j < n; j++) {
                int var = s[j];
                if (j - w >= 0) var += dp[i-1][j-w];
                dp[i][j] = max(var, dp[i][j-1]);
            }
        }
        cout << dp[k][n-1] << endl;
    }
}
