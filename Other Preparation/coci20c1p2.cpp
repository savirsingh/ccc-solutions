#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pii tuple<ll, ll>
#define mt make_tuple
#define pb push_back
#define eb emplace_back

const int MM = 301;
int n, m, dp[MM][MM], ans = 1e9;
string scary, fav;

int solve(int a, int b) {
    if (dp[a][b] != -1) return dp[a][b];
    if (b == m) return 0;
    dp[a][b] = 1e9;
    bool possible = false;
    for (int i = 0; i < n; ++i) {
        if (scary[i] == scary[a]) {
            for (int j = -1; j <= 1; ++j) {
                if (j == 0 || i + j < 0 || i + j >= n) continue;
                if (scary[i + j] != fav[b]) continue;
                int ex = abs(a - i) + 1;
                dp[a][b] = min(dp[a][b], solve(i + j, b + 1) + ex);
                possible = true;
            }
        }
    }
    if (!possible) dp[a][b] = 1e9;
    return dp[a][b];
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    cin >> scary >> fav;
    memset(dp, -1, sizeof dp);
    // it is impossible if:
    // some words in fav are not in scary
    for (char i : fav) {
        if (scary.find(i) == string::npos) {
            cout << -1 << endl; return false;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (scary[i] == fav[0]) ans = min(ans, solve(i, 1));
    }
    if (ans >= 1e8) cout << -1 << endl;
    else cout << ans << endl;
}