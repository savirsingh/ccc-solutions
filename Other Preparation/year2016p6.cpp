// code by savir singh
// https://dmoj.ca/problem/year2016p6
// 100/100

#include <bits/stdc++.h>
using namespace std;

const int MM = 21;
const int MMM = 1 << 21;
int n, l, r, w, left[MM], right[MM], cost[MM], dp[MMM];
bool good[MMM];

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int combination(int leftt, int rightt) {return (rightt << l) | leftt;}

int32_t main() {
    memset(dp, 0x3f, sizeof dp);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    read(l);read(r);read(w); n = l + r;
    int ind = 0;
    for (int i = 0; i < l; i++) {
        int a; read(a); cost[ind] = a; ind++;
    }
    for (int i = 0; i < r; i++) {
        int a; read(a); cost[ind] = -a; ind++;
    }
    for (int i = 0; i < (1 << n); i++) {
        int ret = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) ret += cost[j];
        }
        if (abs(ret) <= w) good[i] = true;
        else good[i] = false;
    }
    dp[(1 << n) - 1] = 0;
    for (int i = (1 << n) - 1; i > 0; i--) {
        if (good[i]) {
            int lef = i & ((1 << l) - 1), rig = i >> l;
            int right = rig, left = lef;
            while (left) {
                left = (left - 1)&i;
                if (good[combination(left, rig)]) dp[combination(left, rig)] = min(dp[combination(left, rig)], dp[i] + 1);
            }
            while (right) {
                right = (right - 1)&i;
                if (good[combination(lef, right)]) dp[combination(lef, right)] = min(dp[combination(lef, right)], dp[i] + 1);
            }
        }
    }
    cout << dp[0] << endl;
}
