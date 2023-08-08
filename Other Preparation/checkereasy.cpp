// code by savir singh

// Include everything needed for CP
#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
//#define int long long // comment out if unnecessary
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fe(i,x,n) for(int i=x;i<=n;i++)

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

// == your template ends here, start coding!!! ==

//vars
const int mm = 3002;
int n, m, r, c, x, r1, c1, r2, c2, psa1[mm][mm], psa0[mm][mm];
bool colour[mm][mm];

bit32 main() {
    __
    memset(colour, false, sizeof colour);
    fastscan(n, m);
    int prev = 0, cur = 1;
    fe(i, 1, n) {
        cur = prev ^ 1;
        prev = cur;
        fe(j, 1, m) {
            if (cur)colour[i][j] = 1;
            cur ^= 1;
        }
    }
    while(1) {
        fastscan(r, c, x);
        if (r == 0) break;
        if (colour[r][c])psa1[r][c] = x;
        else psa0[r][c] = x;
    }
    fe(i, 1, n) {
        fe(j, 1, m) {
            psa1[i][j] += -psa1[i - 1][j - 1] + psa1[i - 1][j] + psa1[i][j - 1];
            psa0[i][j] += -psa0[i - 1][j - 1] + psa0[i - 1][j] + psa0[i][j - 1];
        }
    }
    while(1) {
        fastscan(r1, c1, r2, c2);
        if (r1 == 0) break;
        //now output the sum diff
        bool good = colour[r1][c1];
        int sum1 = 0, sum2 = 0;
        if (good) {
            sum1 = psa1[r2][c2] - psa1[r1 - 1][c2] - psa1[r2][c1 - 1] + psa1[r1 - 1][c1 - 1];
            sum2 = psa0[r2][c2] - psa0[r1 - 1][c2] - psa0[r2][c1 - 1] + psa0[r1 - 1][c1 - 1];
        } else {
            sum1 = psa0[r2][c2] - psa0[r1 - 1][c2] - psa0[r2][c1 - 1] + psa0[r1 - 1][c1 - 1];
            sum2 = psa1[r2][c2] - psa1[r1 - 1][c2] - psa1[r2][c1 - 1] + psa1[r1 - 1][c1 - 1];
        }
        fastprint(sum1 - sum2);
    }

    return 0;
}
