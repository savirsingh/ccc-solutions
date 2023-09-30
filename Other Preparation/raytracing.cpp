// code by savir singh
// https://dmoj.ca/problem/raytracing
// 15/15

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

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

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

// Vars
int mm = (1 << 13) + 2;
int** bit = nullptr; // Declare bit as a pointer to a 2D array

inline void update(int pos1, int pos2, int val) {
    for (int i = pos1; i < mm; i += i & -i) {
        for (int j = pos2; j < mm; j += j & -j) {
            bit[i][j] += val;
        }
    }
}

inline int qr(int pos1, int pos2) {
    int ret = 0;
    for (int i = pos1; i > 0; i -= i & -i) {
        for (int j = pos2; j > 0; j -= j & -j) {
            ret += bit[i][j];
        }
    }
    return ret;
}

int32_t main() {
    boost();
    int N;
    fastscan(N);

    // Dynamically allocate memory for the bit array
    bit = new int*[mm];
    for (int i = 0; i < mm; i++) {
        bit[i] = new int[mm];
        memset(bit[i], 0, sizeof(int) * mm); // Initialize with zeros
    }

    vector<int> h(N + 1);

    for (int i = 1; i <= N; i++) {
        fastscan(h[i]);
        ++h[i];
        update(i, h[i], 1);
    }

    int Q;
    fastscan(Q);

    for (int a = 0; a < Q; a++) {
        int QU;
        fastscan(QU);
        if (QU == 1) {
            int i, j, a, b;
            fastscan(i, j, a, b);
            ++i;
            ++j;
            ++a;
            ++b;
            fastprint(qr(j, b) - qr(i - 1, b) - qr(j, a - 1) + qr(i - 1, a - 1));
        } else {
            int i, hi;
            fastscan(i, hi);
            ++i;
            ++hi;
            update(i, h[i], -1);
            h[i] = hi;
            update(i, hi, 1);
        }
    }

    // Deallocate memory for the bit array at the end of the program
    for (int i = 0; i < mm; i++) {
        delete[] bit[i];
    }
    delete[] bit;

    return 0;
}
