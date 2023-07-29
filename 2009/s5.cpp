// code by savir singh
// 100/100 on DMOJ

#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
//#define int long long - not needed rn
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
inline void fastscan(int &num) {
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
}

// == your template ends here, start coding!!! ==

// vars
const int mm = 1005, mmm = 30005;
int m, n, k, diff[mm][mmm], ans = 0, freq = 0;

bit32 main() {
    __
    fastscan(m);
    fastscan(n);
    fastscan(k);
    fe(i, 1, k) {
        int x, y, r, bit;
        fastscan(x);
        fastscan(y);
        fastscan(r);
        fastscan(bit);
        fe(j, max(1, x-r), min(n, x+r)) {
            int dx = abs(x - j);
            int hit = sqrt(r * r - dx * dx);
            diff[j][max(1, y-hit)] += bit;
            diff[j][min(m, y+hit)+1] -= bit;
        }
    }
    fe(i, 1, n) {
        fe(j, 1, m) {
            diff[i][j] += diff[i][j-1];
            if (diff[i][j] > ans) {
                ans = diff[i][j];
                freq = 1;
            } else if (diff[i][j] == ans) freq++;
        }
    }
    cout<<ans<<endl<<freq<<endl;

    return 0;
}
