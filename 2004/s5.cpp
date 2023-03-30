// code by savir singh
// took ages to debug.

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) (int) (a).size()
#define rsz resize
#define pii pair<int, int>
#define eb emplace_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)
#define fr(i,x,n) for(int i=x;i>n;i--)
#define fre(i,x,n) for(int i=x;i>=n;i--)
#define mod 1000000007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MM = 101;
int m, n, grid[MM][MM], dp[MM][MM][4];

int solve(int i, int j, int state) {
    if (i < 1 || j < 1 || i > m || j > n || grid[i][j] == -INF) return -INF;
    if (i == m && j == n) return grid[i][j];
    if (dp[i][j][state] != -1) return dp[i][j][state];
    int ans = -INF;
    if (state != 2) {
        // go up
        ans = solve(i - 1, j, 1);
    }
    if (state != 1) {
        // go down
        ans = max(ans, solve(i + 1, j, 2));
    }
    // go right
    ans = max(ans, solve(i, j + 1, 3));
    ans += grid[i][j];
    return dp[i][j][state] = ans;
}

int32_t main() {
    __ while (true) {
        cin >> m >> n;
        memset(dp, -1, sizeof dp);
        memset(grid, 0, sizeof grid);
        if (m == 0 && n == 0) break;
        fe(i, 1, m) {
            fe(j, 1, n) {
                char g;
                cin >> g;
                if (g == '.') grid[i][j] = 0;
                else if (g == '*') grid[i][j] = -INF;
                else grid[i][j] = g - '0';
            }
        }
        cout << solve(m, 1, 3) << endl;
    }
}
