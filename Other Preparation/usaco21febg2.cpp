// code by savir singh
// https://dmoj.ca/problem/usaco21febg2
// 100/100

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

const int MM = 301;
int n, a[MM], dp[MM][MM];

int32_t main() {
    __ cin >> n;
    fe(i, 1, n) cin >> a[i];
    fe(adder, 1, n)
    {
        fe(l, 1, n - adder)
        {
            int r = l + adder;
            if (a[l] == a[r]) dp[l][r] = max(dp[l][r], dp[l+1][r-1] + 1);
            fe(m, l + 1, r)
            {
                dp[l][r] = max(dp[l][r], dp[l][m] + dp[m][r]);
            }
        }
    }
    cout << n - dp[1][n] << endl;
}
