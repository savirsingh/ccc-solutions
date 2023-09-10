// code by savir singh
// https://dmoj.ca/problem/ds1
// 100/100

// Include everything needed for CP
#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fe(i,x,n) for(int i=x;i<=n;i++)

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

// == your template ends here, start coding!!! ==

//vars
const int mm = 1e5 + 1;
int n, m, a[mm], bit[mm], bit_freq[mm];

//here we init BIT functions

//query sum from 1 to pos in log time
inline int query(int pos) {
        int sum = 0;
        for (int i = pos; i > 0; i -= i & -i) {
                sum += bit[i];
        }
        return sum;
}

//change value update function
inline void update(int pos, int val) {
        int prev = query(pos) - query(pos - 1);
        int diff = val - prev;
        for (int i = pos; i <= n; i += i & -i) {
                bit[i] += diff;
        }
}

inline int query_freq(int pos) {
        int sum = 0;
        for (int i = pos; i > 0; i -= i & -i) {
                sum += bit_freq[i];
        }
        return sum;
}

inline void update_freq(int pos, int val) {
        for (int i = pos; i < mm; i += i & -i) {
                bit_freq[i] += val;
        }
}

bit32 main() {
        __
        cin >> n >> m;
        fe(i, 1, n) {
                cin >> a[i];
                update_freq(a[i], 1);
                update(i, a[i]);
        }

        while(m--) {
                string C;
                int x;
                cin >> C >> x;
                if (C == "C") {
                        int v; cin >> v;
                        update(x, v);
                        update_freq(a[x], -1);
                        update_freq(v, 1);
                        a[x] = v;
                }
                else if (C == "S") {
                        int l, r;
                        l = x; cin >> r;
                        fastprint(query(r) - query(l - 1));
                }
                else {
                        fastprint(query_freq(x));
                }
        }

        return 0;
}
