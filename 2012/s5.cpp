// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX=32;
int k, r, c, cat[MAX][MAX], dp[MAX][MAX];

// dp state:
// dp[i][j] = number of paths to reach (i, j)
// answer: dp[r][c]

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(cat, false, sizeof cat);
    cin >> r >> c >> k;
    for (int i=1, x, y; i<=k; i++) {
        cin >> x >> y;
        cat[x][y] = true;
    }
    // base case
    dp[1][1] = 1;
    for (int i=1; i<=r; i++) {
        for (int j=1; j<=c; j++) {
            if (cat[i][j]) continue;
            if (i != 1) dp[i][j] += dp[i-1][j];
            if (j != 1) dp[i][j] += dp[i][j-1];
        }
    }
    cout << dp[r][c] << endl;
}
