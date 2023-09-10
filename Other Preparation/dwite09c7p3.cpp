// code by savir singh
// https://dmoj.ca/problem/dwite09c7p3
// 10/10

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
#define w(x) int x; cin >> x; while(x--)
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
        }while (num > 0);

        fputs(&buffer[idx + 1], stdout);
        fputs(endline.c_str(), stdout);
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
        fputs(s.c_str(), stdout);
        fputs(endline.c_str(), stdout);
}

// == your template ends here, start coding!!! ==

//vars
const int mm = 11;
char grid[mm][mm];
int ans = 0;
bool vis[mm][mm];

#ifndef ONLINE_JUDGE
int T = 2;
#else
int T = 5;
#endif // ONLINE_JUDGE

//simple flood fill
inline void flood_fill(int i, int j) {
        if (vis[i][j]) return;
        vis[i][j] = true;
        if (grid[i][j + 1] == '#') flood_fill(i, j + 1);
        if (grid[i + 1][j] == '#') flood_fill(i + 1, j);
        if (grid[i][j - 1] == '#') flood_fill(i, j - 1);
        if (grid[i - 1][j] == '#') flood_fill(i - 1, j);
        if (grid[i][j] == '#') {
                ++ans;
        }
}

bit32 main() {
        __
        while (T--) {
                memset(vis, false, sizeof vis);
                ans = 0;
                fe(i, 0, 10) {
                        fe(j, 0, 10) {
                                grid[i][j] = 0;//all water
                        }
                }
                //start next round
                fe(i, 1, 10) {
                        fe(j, 1, 10) {
                                cin >> grid[i][j];
                        }
                }
                fe(i, 1, 10) {
                        fe(j, 1, 10) {
                                if (grid[i][j] == 'A') {
                                        flood_fill(i, j);
                                }
                        }
                }
                string brk; cin >> brk;
                fastprint(1 + ans);
        }

        return 0;
}
