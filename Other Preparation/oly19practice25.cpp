// code by savir singh
// oly homework lvl4

#include <iostream>
using namespace std;
#define ll long long

const int MM = 5e3 + 5;
int n, m, k, q;
ll prefix[MM][MM];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++) {
        int x, y, X, Y; cin >> x >> y >> X >> Y;
        prefix[x][y]++;prefix[x][Y+1]--;
        prefix[X+1][y]--;prefix[X+1][Y+1]++;
    }
    for (int i = 1; i <= MM - 1; i++) {
        for (int j = 1; j <= MM - 1; j++) {
            prefix[i][j] += prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }
    for (int i = 1; i <= MM - 1; i++) {
        for (int j = 1; j <= MM - 1; j++) {
            prefix[i][j] += prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }
    cin >> q;
    for (int i = 1; i <= q; i++) {
        int A, B, C, D; cin >> A >> B >> C >> D;
        ll ans = prefix[C][D] - prefix[C][B-1] - prefix[A-1][D] + prefix[A-1][B-1];
        cout << ans << endl;
    }
}
