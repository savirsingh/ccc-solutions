// code by savir singh
// https://dmoj.ca/problem/dmopc18c4p2
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 800;

int n, a[MAX], sum = 0;
bool dp[500000];

// dp[i] = whether we can form the sum i using task times

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    dp[0] = true; // base case

    for (int i = 1; i <= n; i++) {
        for (int j = sum; j >= a[i]; j--) {
            if (dp[j-a[i]]) dp[j] = true;
        }
    }
    int best = INT_MAX;
    for (int i = 0; i <= sum; i++) {
        if (dp[i]) best = min(best, abs(i - (sum - i)));
    }
    cout << best << "\n";
}
