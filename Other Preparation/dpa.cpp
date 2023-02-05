// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=1e5+2;
int n, h[MAX], dp[MAX];

int32_t main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> h[i];
    }
    for (int i=2; i<=n; i++) {
        dp[i] = INT_MAX;
    }
    dp[1] = 0;
    for (int i=1; i<=n-1; i++) {
        dp[i+1] = min(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
        if (i!=n-1) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
    }
    if (dp[n] == INT_MAX) {cout << 0 << endl; return false;}
    cout << dp[n] << endl;
}
