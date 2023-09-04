// code by savir singh
// https://dmoj.ca/problem/sac22cc5p5
// 100/100

// Include everything needed for CP
#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
#define int long long // comment out if unnecessary
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

// Fast Output For Integers
inline void fastprint(int num, const string& endline = "\n") {
    if (num < 0) {
        putchar('-');
        num = -num;
    }
    char buffer[20];
    int idx = 19;
    buffer[idx--] = '\0';

    do {
        buffer[idx--] = static_cast<char>('0' + num % 10);
        num /= 10;
    } while (num > 0);

    fputs(&buffer[idx + 1], stdout);
    fputs(endline.c_str(), stdout);
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
    fputs(s.c_str(), stdout);
    fputs(endline.c_str(), stdout);
}

//vars
const int mm = 5008;
int n, m, k, base1 = 5623, base2 = 10007, base3 = 24859, base4 = 12763, p[mm], p2[mm], p3[mm], p4[mm], hsh[mm][mm], hsh2[mm][mm];
char grid[mm][mm];
set<pair<int, int>> grids;

inline pair<int, int> gett(int x1, int x2, int y1, int y2) {
        int hsh1 = hsh[x2][y2];
        hsh1 = (hsh1 - (hsh[x1 - 1][y2] * p[x2 - x1 + 1] % mod) + mod) % mod;
        hsh1 = (hsh1 - (hsh[x2][y1 - 1] * p2[y2 - y1 + 1] % mod) + mod) % mod;
        hsh1 = (hsh1 + (hsh[x1 - 1][y1 - 1] * p[x2 - x1 + 1] % mod * p2[y2 - y1 + 1] % mod) + mod) % mod;

        int hsh3 = hsh2[x2][y2];  // Use hsh2 array and base3, base4 here
        hsh3 = (hsh3 - (hsh2[x1 - 1][y2] * p3[x2 - x1 + 1] % mod2) + mod2) % mod2;
        hsh3 = (hsh3 - (hsh2[x2][y1 - 1] * p4[y2 - y1 + 1] % mod2) + mod2) % mod2;
        hsh3 = (hsh3 + (hsh2[x1 - 1][y1 - 1] * p3[x2 - x1 + 1] % mod2 * p4[y2 - y1 + 1] % mod2) + mod2) % mod2;

        return {hsh1, hsh3};
}

bit32 main() {
        __

        cin >> n >> m >> k;
        p[0] = p2[0] = p3[0] = p4[0] = 1;

        for (int i = 1; i < mm; i++) {
                p[i] = p[i - 1] * base1 % mod;
                p2[i] = p2[i - 1] * base2 % mod;
                p3[i] = p3[i - 1] * base3 % mod2;
                p4[i] = p4[i - 1] * base4 % mod2;
        }

        fe(i, 1, n) {
                fe(j, 1, m) {
                        cin >> grid[i][j];
                        hsh[i][j] = (hsh[i - 1][j] * base1 % mod + hsh[i][j - 1] * base2 % mod - hsh[i - 1][j - 1] * base1 % mod * base2 % mod + grid[i][j] + mod) % mod;

                        // Update hsh2 array using base3 and base4
                        hsh2[i][j] = (hsh2[i - 1][j] * base3 % mod2 + hsh2[i][j - 1] * base4 % mod2 - hsh2[i - 1][j - 1] * base3 % mod2 * base4 % mod2 + grid[i][j] + mod2) % mod2;
                }
        }

        fe(i, 1, n - k + 1) {
                fe(j, 1, m - k + 1) {
                        grids.insert(gett(i, i + k - 1, j, j + k - 1));
                }
        }

        fastprint(sz(grids));

        return 0;
}
