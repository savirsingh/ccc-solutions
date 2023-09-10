// code by savir singh
// https://dmoj.ca/problem/bitcombos
// 16/16

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
const int mm = 101;
int n, not_fixed = 60, p[61];
bool fixedd[64], one[64], zero[64];

bit32 main() {
        __
        p[0] = 1;
        fe(i, 1, 60) {
                p[i] = p[i - 1] * 2;
        }
        memset(fixedd, false, sizeof fixedd);
        memset(one, false, sizeof one);
        memset(zero, false, sizeof zero);
        cin >> n;
        fe(i, 1, n) {
                string query;
                int y, z;
                cin >> query >> y >> z;
                bitset<60> ys(y), zs(z);
                string ystr = ys.to_string(), zstr = zs.to_string();
                if (query == "AND") {
                        f(i, 0, sz(ystr)) {
                                char res = zstr[i], cur = ystr[i];
                                if (res == '1' && cur == '1') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (zero[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        one[i] = true;
                                }
                                if (res == '1' && cur == '0') {
                                        fastprint(0);
                                        return 0;
                                }
                                if (res == '0' && cur == '1') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (one[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        zero[i] = true;
                                }
                        }
                }
                if (query == "OR") {
                        f(i, 0, sz(zstr)) {
                                char res = zstr[i], cur = ystr[i];
                                if (res == '1' && cur == '0') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (zero[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        one[i] = true;
                                }
                                if (res == '0' && cur == '0') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (one[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        zero[i] = true;
                                }
                                if (res == '0' && cur == '1') {
                                        fastprint(0);
                                        return 0;
                                }
                        }
                }
                if (query == "NAND") {
//                        cout << not_fixed << " " << ystr << " " << zstr << endl;
                        f(i, 0, sz(ystr)) {
                                char res = zstr[i], cur = ystr[i];
                                if (res == '1' && cur == '1') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (one[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        zero[i] = true;
                                }
                                if (res == '0' && cur == '1') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (zero[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        one[i] = true;
                                }
                                if (res == '0' && cur == '0') {
                                        fastprint(0);
                                        return 0;
                                }
                        }
                }
                if (query == "NOR") {
                        f(i, 0, sz(ystr)) {
                                char res = zstr[i], cur = ystr[i];
                                if (res == '1' && cur == '0') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (one[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        zero[i] = true;
                                }
                                if (res == '0' && cur == '0') {
                                        if (!fixedd[i]) --not_fixed;
                                        fixedd[i] = true;
                                        if (zero[i]) {
                                                fastprint(0);
                                                return 0;
                                        }
                                        one[i] = true;
                                }
                                if (res == '1' && cur == '1') {
                                        fastprint(0);
                                        return 0;
                                }
                        }
                }
        }
//        fastprint(not_fixed);
        fastprint(p[not_fixed]);

        return 0;
}
