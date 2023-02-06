// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

// state:
// dp[i] = min total weight for value i

const int MAX = 1e5+2; // because 100 (N) * 1e3 (v_i) = 1e5 [max possible sum]
int n, cap, dp[MAX], w, v, ans = -1;

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n >> cap;
    memset(dp, 0x3f, sizeof dp);
    dp[0] = 0;
    for (int i=0; i<n; i++) {
        cin >> w >> v;
        for (int j=MAX; j>=v; j--) {
            dp[j] = min(dp[j], dp[j-v] + w);
        }
    }
    for (int i=0; i<MAX; i++) {
        if (dp[i] <= cap) {
            ans=i;
        }
    }
    cout << ans << endl;
}
