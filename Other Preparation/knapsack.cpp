// code by savir singh
// https://dmoj.ca/problem/knapsack
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 5005;

int n, m, dp[MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int n, v, p; cin >> n >> v >> p;
        for (int j = 5002; j >= 0; j--) {
            for (int k = 1; k * v <= j && k <= n; k++) {
                int cost = k * v, val = k * p;
                dp[j] = max(dp[j], dp[j-cost] + val);
            }
        }
    }
    int best = -1e9;
    for (int i = 1; i <= m; i++) {
        int c, f; cin >> c >> f;
        best = max(best, dp[c] - f);
    }
    cout << best << endl;
}
