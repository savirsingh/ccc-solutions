#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int MM = 1e5 + 1;
int n;
int a[MM], dp[MM];

int32_t main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) dp[i] = 1;
    for (int i = 2; i <= n; ++i) {
        if (a[i] <= a[i-1]) dp[i] = dp[i-1] + 1;
    }
    int best = 0;
    for (int i = 1; i <= n; ++i) best=max(best, dp[i]);
    cout << best << endl;
}