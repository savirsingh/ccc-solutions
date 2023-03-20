// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 2001;
int n, k, dp[MM][MM], last[MM];
string a, b;

void lcs() {
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> a;
    if (n == k) {
        cout << a << endl;
        return false;
    }
    if (k > n) {
        cout << "WRONGANSWER" << endl;
        return false;
    }
    char use = 'l';
    for (int i = 1; i <= n; i++) last[a[i-1]] = i;
    for (char j = 'a'; j <= 'z'; j++) {
        if (last[j] <= k) {
            use = j;
            break;
        }
    }
    for (int i = 1; i <= k; i++) b += a[i-1];
    for (int i = k + 1; i <= n; i++) b += use;
    lcs();
    if (dp[n][n] != k) {
        string ans;
        for (int i = n - k + 1; i <= n; i++) ans += a[i-1];
        for (int i = 1; i <= n - k; i++) ans += use;
        b = ans;
        lcs();
        if (dp[n][n] == k) cout << ans << endl;
        else cout << "WRONGANSWER" << endl;
        return false;
    }
    cout << b << endl;
}
