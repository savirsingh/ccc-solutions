// code by savir singh
// https://dmoj.ca/problem/coci07c1p4
// 111/111

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
const int mod3 = 1e5;
int n, dp[MM][MM];
char a[MM];

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

int give(char a, char b) {
    if (a == b && a == '?') return 3;
    if (a == '?' && (b == ')' || b == '}' || b == ']') || (a == '(' || a == '{' || a == '[') && b == '?' || (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')) return 1;
    return 0;
}

int rec(int l, int r) {
    if (l >= r) return 1;
    if (dp[l][r] != -1) return dp[l][r];
    dp[l][r] = 0;
    for (int i = l + 1; i <= r; i+=2) {
        dp[l][r] += rec(l+1, i-1) * give(a[l], a[i]) * rec(i+1, r);
    }
    if (dp[l][r] >= mod3) dp[l][r] = dp[l][r] % mod3 + mod3;
    return dp[l][r];
}

int32_t main() {
    __ cin >> n;
    f(i, 0, n) cin >> a[i];
    memset(dp, -1, sizeof dp);
    int res = rec(0, n-1);
    if (res >= mod3) cout << setw(5) << setfill('0') << res % mod3 << endl;
    else cout << res << endl;
}
