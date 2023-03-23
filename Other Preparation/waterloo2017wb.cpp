// code by savir singh
// https://dmoj.ca/problem/waterloo2017wb
// 100/100

#include <bits/stdc++.h>
using namespace std;

const int MM = 2001;
int n, k, dp[MM][MM], last[200];
string a, b;

bool lcs() {
    memset(dp, 0, sizeof dp);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][n] == k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k >> a;
    if (k > n) {
        cout << "WRONGANSWER" << endl;
        return false;
    }
    char use = 'l';
    for (int i = 1; i <= n; i++) last[a[i-1]] = i;
    for (char j = 'a'; j <= 'z'; j++) {
        if (last[j] == 0) {
            use = j;
            break;
        }
    }
    for (int i = n - k + 1; i <= n; i++) b += a[i-1];
    for (int i = 1; i <= n - k; i++) b += use;
    if (!lcs()) cout << "WRONGANSWER" << endl;
    else cout << b << endl;
}
