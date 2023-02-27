// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e6+2;

int n, cost[MAX], dp[MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    dp[1] = cost[1];
    dp[2] = cost[1] + cost[2] - min(cost[1], cost[2])/4;
    for (int i = 3; i <= n; i++) {
        dp[i] = min({cost[i] + dp[i-1], cost[i] + cost[i-1] + dp[i-2] - min(cost[i-1], cost[i])/4, cost[i] + cost[i-1] + cost[i-2] + dp[i-3] - min({cost[i-1], cost[i-2], cost[i]})/2});
    }
    cout << dp[n] << endl;
}
