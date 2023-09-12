// code by savir singh
// 100/100 on DMOJ

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define int long long
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
const int mm = 1e5 + 1;
int n, bit[mm];
double ans = 0;

struct score {
        int sc, pos;
};

bool operator < (const score &a, const score &b) {
        if (a.sc == b.sc)
                return a.pos > b.pos;
        return a.sc > b.sc;
}

vector<score> scores;

inline void update(int pos, int val) {
        while (pos <= mm) {
                bit[pos] += val;
                pos += pos & -pos;
        }
}

inline int query(int pos) {
        int sum = 0;
        while (pos > 0) {
                sum += bit[pos];
                pos -= pos & -pos;
        }
        return sum;
}

int32_t main() {
        boost();
        cin >> n;
        for (int i = 1; i <= n; i++) {
                int a; cin >> a;
                scores.pb({a, i});
        }
        sort(all(scores));
        for (score s : scores) {
                update(s.pos, 1);
                ans += query(s.pos);
        }
        cout << fixed << setprecision(2) << ans / n << endl;

        return 0;
}
