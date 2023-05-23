// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 1501;
int n, s[MM];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c; cin >> c;
            if (c == 'S') s[j]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i > n - s[j]) cout << 'S';
            else cout << '.';
        }
        cout << endl;
    }
}
