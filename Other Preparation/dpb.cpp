// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;

const int MAX = 1e5+2;
int n, k, h[MAX], dp[MAX];

// dp state:
// dp[i] = the min cost incurred to reach stone i

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> h[i];
    // set dp array to large number
    memset(dp, 0x3f, sizeof dp);
    // base case: dp[1] = 0
    dp[1] = 0;
    for (int i=1; i<=n-1; i++) {
        for (int j=1; j<=k; j++) {
            if (i + j <= n) dp[i+j] = min(dp[i+j], dp[i]+abs(h[i] - h[i+j]));
        }
    }
    cout << dp[n] << endl;
}
