// code by savir singh

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
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

const int MM = 1e6 + 1;
int n, m, grid[3][MM], res[3];

int bina(int a, int b)
{
    int ans = 1;
    while (b > 0) {
        if (b % 2 == 1) ans = ans * a % mod;
        a = a * a % mod;
        b /= 2;
    }
    return ans;
}

int32_t main() {
    __ cin >> n >> m;
    fe(i, 1, 2)
    {
        fe(j, 1, n) cin >> grid[i][j];
    }
    fe(j, 1, 2)
    {
        int min_ = 2, max_ = 2 * m, col = 0;
        for (int i = j; i <= n; i += 2) {
            if (grid[1][i] && grid[2][i]) {
                min_ = max(min_, grid[1][i] + grid[2][i]);
                max_ = min(max_, grid[1][i] + grid[2][i]);
            }
            else if (grid[1][i]) {
                min_ = max(min_, grid[1][i] + 1);
                max_ = min(max_, grid[1][i] + m);
            }
            else if (grid[2][i]) {
                min_ = max(min_, grid[2][i] + 1);
                max_ = min(max_, grid[2][i] + m);
            }
            else col++;
        }
        fe(i, min_, max_)
        {
            int mo = min(i - 1, m) - max(i - m, (int)1) + 1;
            res[j] = (res[j] + bina(mo, col)) % mod;
        }
    }
    cout << res[1] * res[2] % mod << endl;
}
