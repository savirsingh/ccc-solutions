// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 251;
int n, k, dp[MM][MM];

// state:
// dp[i][j] = # of ways to give i pieces to j
// people, answer is dp[n][k]

int32_t main(){
    cin >> n >> k;
    dp[0][1] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= min(k, i); j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-j][j];
        }
    }
    cout << dp[n][k] << endl;
}
