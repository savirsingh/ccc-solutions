// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 102;

int n, t, dp[MAX][MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> t;
    for (int a = 1; a <= n; a++) {
        int l; cin >> l;
        int experience = 0, time = 0;
        for (int i = 1; i <= l; i++) {
            int ti, x; cin >> ti >> x;
            x += experience;
            experience = x;
            ti += time;
            time = ti;
            for (int j = 1; j <= t; j++) {
                dp[a][j] = max(dp[a][j], dp[a - 1][j]);
                if (ti <= j) dp[a][j] = max(dp[a][j], dp[a-1][j-ti]+x);
            }
        }
    }
    cout << dp[n][t] << endl;
}
