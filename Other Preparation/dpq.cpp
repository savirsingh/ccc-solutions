// code by savir singh
// https://dmoj.ca/problem/dpq
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mm = 2e5 + 1, mmm = 1e9 + 1;
int N, h[mm], a[mm], dp[mm], bit[mm];

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

inline void update(int pos, int val) {
        while (pos <= mm) {
                bit[pos] = max(bit[pos], val);
                pos += pos & -pos;
        }
}

inline int qr(int pos) {
        int ret = 0;
        while (pos > 0) {
                ret = max(ret, bit[pos]);
                pos -= pos & -pos;
        }
        return ret;
}

int32_t main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        fastscan(N);
        for (int i = 1; i <= N; i++) {
                fastscan(h[i]);
        }
        for (int i = 1; i <= N; i++)
                fastscan(a[i]);
        for (int i = 1; i <= N; i++) {
                dp[i] = qr(h[i] - 1) + a[i];
                update(h[i], dp[i]);
        }
        int best = -1;
        for (int i = 1; i <= N; i++) {
                best = max(best, dp[i]);
        }
        fastprint(best);
}
