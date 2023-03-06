// code by savir singh

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 102;

int t, m, n, dp[MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    t = 5;
    while (t--) {
        cin >> m >> n;
        memset(dp, 0x3f, sizeof dp);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            int val; cin >> val;
            for (int j = val; j <= m; j++) {
                dp[j] = min(dp[j], dp[j-val] + 1);
            }
        }
        cout << dp[m] << endl;
    }
}
