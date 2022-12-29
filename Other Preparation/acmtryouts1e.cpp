// code by savir singh
// 1/1
// https://dmoj.ca/problem/acmtryouts1e

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e7;

int t, n, m;
int a[205], b[205];
int dp[2][205];

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
      int curr = i % 2, prev = (i - 1) % 2;
      for (int j = 0; j <= m; j++) {
        dp[curr][j] = 0;
        for (int k = a[i]; k <= b[i] && k <= j; k++) {
          dp[curr][j] = (dp[curr][j] + dp[prev][j - k]) % MOD;
        }
      }
    }

    cout << dp[n % 2][m] << endl;
  }
}
