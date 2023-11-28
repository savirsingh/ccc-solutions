// code by savir singh
// https://dmoj.ca/problem/ccoqr16p1
// 15/15

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define int long long

const int mm = 1e5 + 1;
int N;
unordered_map<int, vector<int>> yforx, xfory;
vector<pii> pts;

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

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fastscan(N);
    for (int i = 1; i <= N; i++) {
        int x, y; fastscan(x, y);
        yforx[x].push_back(y);
        xfory[y].push_back(x);
        pts.push_back({x, y});
    }
    for (auto cur = yforx.begin(); cur != yforx.end(); cur++) {
        sort(cur->second.begin(), cur->second.end());
    }
    for (auto cur = xfory.begin(); cur != xfory.end(); cur++) {
        sort(cur->second.begin(), cur->second.end());
    }
    int sum = 0;
    for (auto i : pts) {
        int x = i.first, y = i.second;
        int dow = lower_bound(yforx[x].begin(), yforx[x].end(), y) - yforx[x].begin();
        int le = lower_bound(xfory[y].begin(), xfory[y].end(), x) - xfory[y].begin();
        int up = yforx[x].size() - 1 - dow;
        int ri = xfory[y].size() - 1 - le;
        sum += le * up * dow * ri;
    }
    fastprint(sum * 2);

    return 0;
}
