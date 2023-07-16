// code by savir singh
// 15/15

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MM = 2000 + 5;
int n, t, diff[MM][MM], lft[MM], rht[MM], top[MM], bot[MM], k[MM];
ll ans = 0;
vector<int> x, y;
map<int, int> compressx, compressy;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> lft[i] >> top[i] >> rht[i] >> bot[i] >> k[i];
        compressx[lft[i]] = compressx[rht[i]] = compressy[top[i]] = compressy[bot[i]] = 0;
    }
    int rankk = 0;for (auto &e : compressx) {e.second = ++rankk; x.push_back(e.first);}
    rankk = 0;for (auto &e : compressy) {e.second = ++rankk; y.push_back(e.first);}
    for (int i = 1; i <= n; i++) {
        int r1 = compressx[lft[i]], r2 = compressx[rht[i]], c1 = compressy[top[i]], c2 = compressy[bot[i]];
        diff[r1][c1] += k[i]; diff[r1][c2] -= k[i];
        diff[r2][c1] -= k[i]; diff[r2][c2] += k[i];
    }
    for (int i = 1; i < compressx.size(); i++) {
        for (int j = 1; j < compressy.size(); j++) {
            diff[i][j] += diff[i-1][j] + diff[i][j-1] - diff[i-1][j-1];
            if (diff[i][j] >= t) ans += 1LL * (x[i] - x[i-1]) * (y[j] - y[j-1]);
        }
    }
    cout << ans << endl;
}
