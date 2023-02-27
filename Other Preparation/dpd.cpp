// code by savir singh
// https://dmoj.ca/problem/dpd
// 100/100
// knapsack with optimized 1d array

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e6+2;

int n, w, v[MAX], c[MAX], dp[MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> w;
    for (int i = 1; i <= n; i++) {
        cin >> c[i];
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = w; j >= c[i]; j--) {
            dp[j] = max(dp[j], dp[j-c[i]]+v[i]);
        }
    }
    cout << dp[w] << endl;
}
