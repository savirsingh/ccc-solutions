#include <bits/stdc++.h>
using namespace std;

int n;

long long comb(long long k) {
    if (k < 2) return 0;
    if (k == 2) return 1;
    double ans = 0.;
    for (int i = 0; i < 2; ++i) ans += log(k - i) - log(i + 1);
    return (long long)round(exp(ans));
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    // calc number of no. of twos in the array:
    int twocount = n / 2;
    long long ans = 0;
    for (int i = 1; i < twocount; ++i) {
        ans = max(ans, (long long)comb(n - 2 * i) * i);
    }
    cout << ans << endl;
}