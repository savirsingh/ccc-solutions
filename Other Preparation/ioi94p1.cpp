// code by savir singh

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

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

const int mm = 105;
int N, grid[mm][mm], dp[mm][mm], best = 0;

int32_t main() {
        boost();
        for (int i = 0; i < mm; i++) {
                for (int j = 0; j < mm; j++) {
                        grid[i][j] = -INF;
                        dp[i][j] = -INF;
                }
        }
        fastscan(N);
        for (int i = 1; i <= N; i++) {
                for (int j = 1; j <= i; j++)
                        fastscan(grid[i][j]);
        }
        dp[1][1] = grid[1][1];
        for (int i = 2; i <= N; i++) {
                for (int j = 1; j <= i; j++) {
                        dp[i][j] = max({dp[i][j], dp[i - 1][j] + grid[i][j], dp[i - 1][j - 1] + grid[i][j]});
                }
        }
        for (int i = 1; i <= N; i++)
                best = max(best, dp[N][i]);
        fastprint(best);

        return 0;
}
