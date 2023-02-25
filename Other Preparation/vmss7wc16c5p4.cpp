// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAX = 1e5 + 2;
int n, x, y, z, dp[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> x >> y >> z;
    for (int i = 1; i <= n; i++) {
        dp[i] = -1;
        for (int j : {x, y, z}) {
            if (i - j >= 0 && dp[i-j] != -1) {
                dp[i] = max(dp[i], dp[i-j] + 1);
            }
        }
    }
    cout << dp[n] << endl;
}
