// code by savir singh
// https://dmoj.ca/problem/dmopc22c5p2
// 100/100

// I'm very impressed to have solved this without the editorial.
// The trick was to solve the problem by hand first and then implementing.
// (use this trick for all ad hoc problems - it helps!)
// To solve this, you notice that there are N*(N+1)/2 total subarrays.
// This means we will have |X-Y| = 0 when the total subarrays count is even
// and we will have |X-Y| = 1 when the total subarrays count is odd.
// Next, you have to keep filling the array with ones from left to right
// until you are about to have too many nonnegative sum subarrays. Once you
// reach this point, if you have the necessary X amount of nonnegative sum
// subarrays, you stop and fill the remainder of the array with some large
// negative number to avoid having extra nonnegative sum subarrays. If you
// do not have the required X amount of nonnegative sum subarrays yet, but
// adding another one will mean you will have too many such subarrays, you
// have to carefully choose a negative number to add after the ones. Basically,
// you just need to ensure this negative number adds just enough nonnegative sum
// subarrays to make the total = X. Finally, fill the remainder of the array with
// the large negative number like before to ensure you don't have extras.
// I actually kind of like ad hoc problems!

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
int n, pos = 0;

bit32 main() {
        __
        fastscan(n);
        if (n == 1) {
                fastprint(1);
                return 0;
        }
        int X = n * (n + 1) / 4;
        while (1) {
                ++pos;
                fastprint(1, " ");
                int amt = pos * (pos + 1) / 2;
                if ((pos + 1) * (pos + 2) / 2 > X && amt != X) {
                        fastprint(-(pos - (X - amt - 1)), " ");
                        ++pos;
                        break;
                }
                if (amt == X) {
                        break;
                }
        }
        fe(i, 1, n - pos - 1) {
                fastprint(-mm, " ");
        }
        fastprint(-mm);

        return 0;
}
