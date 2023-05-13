// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 51;
int n, m, ans = 0, ca[MM], dp[1 << 21], fin[1 << 21], backtrack[1 << 21];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, 0x3f, sizeof dp);
    dp[0] = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        ans <<= 1;
        for (int j = 1; j <= m; j++) {
            char re; cin >> re;
            ca[j] = ca[j] << 1 | (re == 'X');
            ans |= (re == 'X');
        }
    }
    if (!ans) cout << 1 << endl << 1 << endl;
    else {
        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < (1 << n); j++) {
                if (dp[j | ca[i]] > dp[j] + 1) {
                    dp[j | ca[i]] = dp[j] + 1;
                    fin[j | ca[i]] = i;
                    backtrack[j | ca[i]] = j;
                }
            }
        }
        cout << dp[ans] << endl;
        for (int r = ans; r != 0; ) {
            cout << fin[r] << " ";
            r = backtrack[r];
        }
        cout << endl;
    }
}
