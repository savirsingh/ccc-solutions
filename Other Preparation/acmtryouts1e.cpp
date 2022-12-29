// code by savir singh
// 1/1
// https://dmoj.ca/problem/acmtryouts1e

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int t, n, m;
int a[205], b[205];
int dp[205][205];

int main() {
  cin >> t;
  while (t--) {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
      cin >> a[i] >> b[i];
    }

    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j <= m; j++) {
        for (int k = a[i]; k <= b[i] && k <= j; k++) {
          dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
        }
      }
    }

    cout << dp[n][m] << endl;
  }
}
