// code by savir singh

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
//#define int long long
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

const int MM = 401;
int n, a[MM], pre[MM], ans = 0;
bool dp[MM][MM];

// fast i/o
void read(int &number)
{
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
    __ read(n);
    fe(i, 1, n) read(a[i]);
    fe(i, 1, n) ans = max(ans, a[i]);
    fe(i, 1, n) pre[i] = a[i] + pre[i - 1];
    fe(i, 1, n) dp[i][i] = true;
    f(adder, 1, n) {
        fe(l, 1, n - adder) {
            int r = l + adder;
            for (int i = 1, j = r; i + 1 <= j;) {
                if (dp[l][i] && dp[j][r] && pre[i] - pre[l-1] == pre[r] - pre[j-1] && (i + 1 == j || dp[i+1][j-1])) {
                    dp[l][r] = true;
                }
                if (pre[i] - pre[l-1] < pre[r] - pre[j-1]) {
                    i++;
                }
                else j--;
            }
            if (dp[l][r]) ans = max(ans, pre[r] - pre[l - 1]);
        }
    }
    cout << ans << endl;
}
