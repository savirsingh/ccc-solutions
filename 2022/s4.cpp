// code by savir singh
// 15/15 on DMOJ

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define int long long
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

//vars
const int mm = 1e6 + 1;
int N, C, P[2 * mm], ans = 0, cnt[mm];

inline int nC2(int n) {
        if (n < 2) return 0;
        return n * (n - 1) / 2;
}

int32_t main() {
        boost();
        cin >> N >> C;
        for (int i = 0; i < N; i++) {
                cin >> P[i];
                P[i + N] = P[i] + C;
                ++cnt[P[i]];
        }
        sort(P, P + 2 * N);
        ans = N * (N - 1) * (N - 2) / 6;
        for (int i = 0, j = 0; i < N; i++) {
                while (j < 2 * N && P[j] - P[i] <= C / 2) {
                        j++;
                }
                ans -= nC2(j - i - 1);
        }
        if (C % 2 == 0) {
                for (int i = 0; i < C / 2; i++) {
                        ans += cnt[i] * nC2(cnt[i + C / 2]) + nC2(cnt[i]) * cnt[i + C / 2];
                }
        }
        cout << ans << endl;

        return 0;
}
