// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1e5+2;
int n, v[MAX], dp[MAX];

// state:
// dp[i] = max sum w/ restriction up to index i
// (1-indexed)

int32_t main() {
    cin >> n;
    for (int i=1; i<=n; i++) cin >> v[i];
    dp[1] = v[1];
    dp[2] = max(v[1], v[2]);
    for (int i=3; i<=n; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + v[i]);
    }
    cout << dp[n] << endl;
}
