// code by savir singh
// https://dmoj.ca/problem/dmopc20c5p4
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
#define w(x) int x; fastscan(x); while(x--)
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
const int mm = 2e5 + 1;
int n, m, base = 131, base2 = mod2, tot = 0;

inline int chsh(vvi& h, vi& p, int col, int a, int b) {
        int u = (h[col][b] - h[col][a - 1] * p[b - a + 1] % mod + mod) % mod;
        return u;
}

bit32 main() {
        __
        cin >> n >> m;
        vector<vector<char>> grid(min(n, m) + 2, vector<char>(max(n, m) + 2, 'B'));
        if (n > m) {
                fe(i, 1, n) {
                        fe(j, 1, m) {
                                cin >> grid[j][i];
                        }
                }
                swap(n, m);
        }
        else {
                fe(i, 1, n) {
                        fe(j, 1, m) {
                                cin >> grid[i][j];
                        }
                }
        }
        vvi h(m + 2, vi(n + 2, 0));
        vi p(m + 2);
        p[0] = 1;
        //get col hashes
        fe(i, 1, m) {
                p[i] = (p[i - 1] * base) % mod;
                fe(j, 1, n) {
                        h[i][j] = (h[i][j - 1] * base + grid[j][i]) % mod;
                }
        }
        fe(i, 1, n) {
                fe(j, i + 1, n) {
                        unordered_map<int, int> cnt;
                        int hsh = 0;
                        fe(k, 1, m) {
                                if (grid[i][k] == grid[j][k]) {
                                        hsh = chsh(h, p, k, i, j);
//                                        cout << i << " " << j << " " << k << " " << hsh << endl;
                                        tot += cnt[hsh];
                                        ++cnt[hsh];
                                }
                                else {
                                        cnt.clear();
                                }
                        }
                }
        }
        fastprint(tot);

        return 0;
}
