// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAX = 1e4 + 2;
double price[MAX], dp[MAX];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    dp[1] = price[1];
    dp[2] = max(price[1], price[2]) + 0.5 * min(price[1], price[2]);
    for (int i = 3; i <= n; i++) {
        dp[i] = min({price[i] + dp[i-1], price[i-1] + price[i] + dp[i-2] - min(price[i-1], price[i])/2, price[i-2] + price[i-1] + price[i] + dp[i-3] - min({price[i-1], price[i], price[i-2]})});
    }
    cout << fixed << setprecision(1) << dp[n] << endl;
}
