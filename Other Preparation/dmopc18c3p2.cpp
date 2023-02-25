// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAX = 1e5 + 2;
int n, a[MAX], b[MAX], dp[3][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j >= 0; j--) {
            if (j > 0) dp[j][i] = dp[j-1][i-1] + a[i];
            else dp[j][i] = max({dp[0][i-1], dp[1][i-1], dp[2][i-1]}) + b[i];
        }
    }
    cout << max({dp[0][n], dp[1][n], dp[2][n]}) << endl;
}
