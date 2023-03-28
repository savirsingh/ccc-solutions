// code by savir singh
// https://dmoj.ca/problem/dp1p2
// 50/50

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

const int MM = 1001;
int n, val[MM], dp[MM][MM];

// interval dp approach

int32_t main() {
    __ cin >> n;
    fe(i, 1, n) {
        int v; cin >> v;
        val[i] = v;
        val[i] += val[i-1];
    }
    f(i, 0, n) {
        fe(j, 1, n - i) {
            int r = j + i;
            dp[j][r] = val[r] - val[j-1] - min(dp[j+1][r], dp[j][r-1]);
        }
    }
    cout << dp[1][n] << endl;
}
