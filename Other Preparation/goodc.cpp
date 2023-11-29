// code by savir singh
// https://dmoj.ca/problem/goodc
// 6/6

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define int long long
#define INF 1e6+5
#define endl '\n'

const int mm = 1e6 + 1;
int N, M, lef[mm];
bool makenoise = false;
set<pii> ds;

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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fastscan(N, M);
    for (int i = 1; i <= N; i++) {
        ds.insert({INF, i});
        lef[i] = INF;
    }
    for (int i = 1; i <= M; i++) {
        int t, p;
        fastscan(t, p);
        if (makenoise) {
            fastprint("Make noise");
            continue;
        }
        if (ds.find({lef[p], p}) != ds.end()) {
            if (t == 1) {
                ds.erase({lef[p], p});
            } else {
                ds.erase({lef[p], p});
                ds.insert({lef[p] - 1, p});
                lef[p]--;
            }
        }

        if (ds.empty()) {
            fastprint("Make noise");
            makenoise = true;
            continue;
        }

        auto fi = ds.begin();
        auto se = --ds.end();
        int a = fi->second, b = se->second;
        fastprint(a, " ");
        fastprint(b);
    }

    return 0;
}
