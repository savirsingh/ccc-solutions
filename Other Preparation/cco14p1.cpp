// code by savir singh
// https://dmoj.ca/problem/cco14p1
// 25/25

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 2002;

int n, dp[MAX][MAX];
bool grid[MAX][MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c; cin >> c;
            if (c == '#') {
                grid[i][j] = true;
                dp[i][j]++;
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 2; j < n; j++) {
            if (grid[i][j] && grid[i+1][j] && grid[i+1][j-1] && grid[i+1][j+1]) {
                dp[i][j] += min({dp[i+1][j], dp[i+1][j-1], dp[i+1][j+1]});
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            res += dp[i][j];
        }
    }
    cout << res << endl;
}
