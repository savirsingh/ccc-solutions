// code by savir singh

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

const int MM = 2001;
int n, dp[MM][MM][2], pre[MM];
pii a[MM];

// fast i/o
void read(int &number){
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int32_t main() {
    __ cin >> n;
    fe(i, 1, n) cin >> a[i].first >> a[i].second;
    sort(a+1, a+n+1);
    fe(i, 1, n) {
        pre[i] = pre[i-1] + a[i].second;
        if (a[i].first == 0) dp[i][i][0] = dp[i][i][1] = a[i].second;
    }
    fe(adder, 1, n) {
        fe(l, 1, n - adder) {
            int r = l + adder;
            if (dp[l+1][r][0] >= a[l+1].first - a[l].first) dp[l][r][0] = max(dp[l][r][0], dp[l+1][r][0] + a[l].second - (a[l+1].first - a[l].first));
            if (dp[l+1][r][1] >= a[r].first - a[l].first) dp[l][r][0] = max(dp[l][r][0], dp[l+1][r][1] + a[l].second - (a[r].first - a[l].first));
            if (dp[l][r-1][0] >= a[r].first - a[l].first) dp[l][r][1] = max(dp[l][r][1], dp[l][r-1][0] + a[r].second - (a[r].first - a[l].first));
            if (dp[l][r-1][1] >= a[r].first - a[r-1].first) dp[l][r][1] = max(dp[l][r][1], dp[l][r-1][1] + a[r].second - (a[r].first - a[r-1].first));
        }
    }
    int ans = -1;
    fe(i, 1, n) fe(j, 1, n) if (dp[i][j][0] || dp[i][j][1]) ans = max(ans, pre[j] - pre[i-1]);
    cout << ans << endl;
}
