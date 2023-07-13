#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int MM = 1e5 + 1, mod = 1e9 + 7;
int n, valid = 1, maxh = 0, lastin = 0;
ll dp[MM];

int32_t main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int h; cin >> h;
        if (h > maxh) { // start new
            maxh = h;
            lastin = i;
            dp[i] = valid;
        }
        if (h < maxh) dp[i] = dp[lastin]; // extend current
        if (h == maxh) { // create new with this as max height
            dp[i] = (dp[lastin] * (i - lastin+1)) % mod;
            lastin = i;
        }
        valid += dp[i]; valid %= mod;
    }
    cout<<dp[n]<<endl;
}