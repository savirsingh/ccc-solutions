// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 1001;
int n, a[MM], b[MM], dp[MM][MM];
string s, t;

// state:
// dp[i][j] = sum with geese game i and
// halks game j

// basically weighted lcs

int32_t main(){
    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> t;
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            if ((s[i-1] == 'W' && t[j-1] == 'L' && b[j] < a[i]) || (s[i-1] == 'L' && t[j-1] == 'W' && b[j] > a[i])) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-1] + a[i] + b[j]);
            }
        }
    }
    cout << dp[n][n] << endl;
}
