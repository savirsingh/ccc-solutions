// code by savir singh

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
#define sz(a) (int) (a).size()
#define f(i,x,n) for(bit32 i=x;i<n;i++)
#define mod 1000000007

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
const int mm = 2e5 + 1;
string n, h;
bit32 freq1[123], freq2[123], A = 19, A2 = 23, B = mod;
int h1[mm], h2[mm], p[mm], p2[mm];
set<int> num_times;

inline int getHash(int a, int b) {
    return (h1[b] - h1[a - 1] * p[b - a + 1] % B + B) % B;
}

inline int getSecondHash(int a, int b) {
    return (h2[b] - h2[a - 1] * p2[b - a + 1] % B + B) % B;
}

bit32 main() {
    __
    cin >> n >> h;
    f(i, 0, sz(n))++freq1[n[i]];

    h1[0] = h[0];
    h2[0] = h[0];
    p[0] = 1;
    p2[0] = 1;
    f(i, 1, sz(h)) {
        h1[i] = (h1[i - 1] * A + h[i]) % B;
        p[i] = (p[i - 1] * A) % B;
        h2[i] = (h2[i - 1] * A2 + h[i]) % B;
        p2[i] = (p2[i - 1] * A2) % B;
    }

    f(i, 0, sz(h)) {
        ++freq2[h[i]];
        if (i >= sz(n))
            --freq2[h[i - sz(n)]];
        int same = 0;
        f(j, 0, 123) {
            if (freq1[j] == freq2[j]) ++same;
            else break;
        }
        if (same == 123)
            num_times.insert(((getHash(i + 2 - sz(n), i)) * getSecondHash(i + 2 - sz(n), i)));
    }
    fastprint(sz(num_times));

    return 0;
}
