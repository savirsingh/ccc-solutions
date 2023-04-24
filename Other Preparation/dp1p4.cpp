// code by savir singh
// https://dmoj.ca/problem/dp1p4
// 50/50

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
#define mod 10007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MM = 1e5 + 1;
string s;
int dp[MM], mpa[200];
bool done[200];

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
    __ cin >> s;
    memset(done, false, sizeof done);
    dp[0] = 1;
    done[s[0]] = true;
    f(i, 1, s.size())
    {
        if (s[i] == s[i-1]) dp[i] = dp[i-1] + (dp[i-1] - dp[i-2]);
        else if (done[s[i]]) dp[i] = dp[i-1] * 2 - mpa[s[i]];
        else dp[i] = dp[i-1] * 2 + 1;
        mpa[s[i]] = dp[i-1];
        done[s[i]] = true;
        dp[i] %= mod;
    }
    cout << dp[s.size()-1] << endl;
}
