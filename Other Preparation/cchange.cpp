// code by savir singh
// https://dmoj.ca/problem/cchange
// 120/120

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAX = 1e4 + 2;
int x, n, dp[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, 0x3f, sizeof dp);
    cin >> x >> n;
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        for (int j = d; j <= x; j++) {
            dp[j] = min(dp[j], dp[j - d] + 1);
        }
    }
    cout << dp[x] << endl;
}
