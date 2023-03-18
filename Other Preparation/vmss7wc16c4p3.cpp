// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 1001;
int d, ir, r, dp[MM][MM];
string a, b;

int32_t main(){
    cin >> d >> ir >> r;
    cin >> a >> b;
    for (int i = 0; i <= a.size(); i++) {
        for (int j = 0; j <= b.size(); j++) {
            if (i == 0 & j == 0) ;
            else if (i == 0) dp[i][j] = j * ir;
            else if (j == 0) dp[i][j] = i * d;
            else {
                if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = min({dp[i-1][j] + d, dp[i][j-1] + ir, dp[i-1][j-1] + r});
            }
        }
    }
    cout << dp[a.size()][b.size()];
}
