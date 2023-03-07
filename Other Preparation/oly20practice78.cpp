// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e5+2;

int n, m, dp[MAX];

// dp[i] = min cost to get i apples

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    memset(dp, 0x3f, sizeof dp);
    dp[0] = 0; // 0 cost to get 0 apples
    for (int i = 1; i <= n; i++) {
        int v, w; cin >> v >> w;
        for (int j = v; j <= 1e5; j++) {
            dp[j] = min(dp[j], dp[j-v] + w);
        }
    }
    int best = 1e18;
    for (int i = m; i <= 1e5; i++) {
        best = min(best, dp[i]);
    }
    cout << best << endl;
}
