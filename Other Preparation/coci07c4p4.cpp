// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 5001;
int t, n, m[MM], w[501], dp[501][MM];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t >> n;
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= t; j++) {
            if (dp[i-1][j]) dp[i][j] = 1;
            if (j >= w[i] && dp[i-1][j-w[i]]) dp[i][j] = 2;
        }
    }
    int ti = t;
    while (dp[n][ti] == 0) ti--;
    for (int i = n; i >= 1; i--) {
        m[i] = dp[i][ti];
        if (m[i] == 2) ti -= w[i];
    }
    int knap = 0, knap2 = 0;
    for (int i = 1; i <= n; i++) {
        if (m[i] == 1) {
            cout << knap; knap += w[i];
        }
        else {
            cout << knap2; knap2 += w[i];
        }
        if (i != n) cout << " ";
    }
    cout << endl;
}
