// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 2e5 + 1;
int n, a[MM], store[3][35], sum = 0;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 30; j++) {
            bool sett = (a[i] >> j) & 1;
            store[1][j] += (i * (n - i + 1)) * (sett ^ 1);
            store[2][j] += (i * (n - i + 1)) * sett;
        }
    }
    for (int i = 0 ; i < 30; i ++) {
        if (store[1][i] < store[2][i]) sum += ((int)1 << i);
    }
    cout << sum << endl;
}
