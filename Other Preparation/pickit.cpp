// code by savir singh
// https://dmoj.ca/problem/pickit
// 100/100

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

const int MM = 201;
int n, a[MM], dp[MM][MM];

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
    __
    while (true) {
        read(n); if (n==0) break;
        memset(a, 0, sizeof a);
        memset(dp, 0, sizeof dp);
        f(i, 0, n) read(a[i]);
        f(i, 0, n) {
            dp[i][i + 1] = 0;
            dp[i][i] = 0;
        }
        f(adder, 2, n) {
            for (int l = 0; l + adder < n; l++) {
                int r = l + adder;
                dp[l][r] = 0;
                for (int m = l + 1; m < r; m++) {
                    dp[l][r] = max(dp[l][r], dp[l][m] + dp[m][r] + a[m] + a[r] + a[l]);
                }
            }
        }
        cout << dp[0][n-1] << endl;
    }
}
