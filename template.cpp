// code by savir singh
// my current cpp template for ccc
// (and for everything else too lol)

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
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
    int c = getchar_unlocked();
    num = 0;
    bool neg = false;

    // Handle negative numbers
    if (c == '-') {
        neg = true;
        c = getchar_unlocked();
    }

    // Process digits
    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar_unlocked();
    }

    if (neg)
        num = -num;
}

bit32 main() {
    __
    // Your code here

    return 0;
}
