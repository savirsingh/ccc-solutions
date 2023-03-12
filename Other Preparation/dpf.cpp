// code by savir singh

#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int MAX = 3002;

int dp[MAX][MAX];
string s, t;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s >> t;
    int n = s.size(), m = t.size();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    string ans;
    for (int r = n, c = m; r != 0 && c != 0; ) {
        if (dp[r][c] == dp[r-1][c]) r--;
        else if (dp[r][c] == dp[r][c-1]) c--;
        else {
            ans += s[r-1];
            r--; c--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
