// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1e4+2;

int order[125], dp[MAX], ans = 0;
string s;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    order['o'] = 1;
    order['v'] = 2;
    order['e'] = 3;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'l') dp[i] = 1;
        else {
            for (int j = 0; j < i; j++) {
                if (order[s[j]] == order[s[i]] - 1) dp[i] += dp[j];
            }
        }
        if (s[i] == 'e') ans += dp[i];
    }
    cout << ans << endl;
}
