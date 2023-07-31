// code by savir singh

#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
//#define int long long // comment out if unnecessary
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

// Fast Input
template<typename T, typename... Args>
inline void fastscan(T& num, Args&... args) {
    int c = getchar();
    num = 0;
    bool neg = false;

    // Handle negative numbers
    if (c == '-') {
        neg = true;
        c = getchar();
    }

    // Process digits
    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar();
    }

    if (neg)
        num = -num;

    if constexpr (sizeof...(args) > 0)
        fastscan(args...); // Recursively read the remaining arguments
}

// == your template ends here, start coding!!! ==

//vars
const int mm = 1e5 + 5;
int n, m, j, ans = -1;
vector<pii> dry;

bit32 main() {
    __
    fastscan(n, m, j);
    f(i, 0, m)
    {
        int p, t; fastscan(p, t);
        dry.push_back({p, t});
    }
    sort(dry.begin(), dry.end());
    int en = n + 1;//mark the ending position
    int l = 0, r = 1e5 + 10;
    while (l <= r) {
        int mid = (l + r) / 2, take =0;
        f(i, 0, m) {
            if (dry[i].second > mid)
                continue;//continue if too long to dry
            if (dry[i].first - take <= j)
                take = dry[i].first;//take max jump possible
        }
        if (en - take <= j) {ans=mid;r=mid-1;}
        else
            l = ++mid;
    }
    cout << ans << endl;

    return 0;
}
