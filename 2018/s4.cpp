// code by savir singh
// 15/15

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define INF 1e9
#define pii pair<int, int>

const int mm = 1e9 + 2;
int N;
unordered_map<int, int> dp;

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

inline int ans(int k) {
    if (dp[k])
        return dp[k];
    int res = 0;
    for (int i = 2; i <= k; ) {
        //actual number
        int num = k / i;
        //how many times does num go into k fully?
        int how_many = k / num;
        //frequency is how_many take away the prev ones
        int freq = (how_many - i + 1);
        res += freq * ans(num);
        i = how_many + 1;
    }
    return dp[k] = res;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fastscan(N);
    dp[1] = 1;
    dp[0] = 0;
    fastprint(ans(N));

    return 0;
}
