// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 1001;
int n, m, dp[MM][MM];
string a, b;

// edit distance:
// dp[i][j] is the minimum number of
// edits required to turn the first i
// numbers of a into the first j numbers
// of b. then, the answer is dp[n][m].

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> a >> b;
    for (int i = 1; i <= n; i++) dp[i][0] = (int)ceil(i / 3.0);
    for (int i = 1; i <= m; i++) dp[0][i] = (int)ceil(i / 3.0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min({dp[i-1][j-1] + 1, dp[i][j-1] + 1, dp[i-1][j] + 1});
                if (i >= 2) dp[i][j] = min(dp[i][j], dp[i-2][j] + 1);
                if (i >= 3) dp[i][j] = min(dp[i][j], dp[i-3][j] + 1);
                if (j >= 2) dp[i][j] = min(dp[i][j], dp[i][j-2] + 1);
                if (j >= 3) dp[i][j] = min(dp[i][j], dp[i][j-3] + 1);
            }
        }
    }
    cout << dp[n][m] << endl;
}
