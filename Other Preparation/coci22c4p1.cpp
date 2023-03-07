// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 102;

int n, m;
char seq[MAX];
int dcount = 0, kcount = 0, ocount = 0, rcount = 0, res, best, krokod;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> seq[i];
        if (seq[i] == 'd') dcount++;
        else if (seq[i] == 'k') kcount++;
        else if (seq[i] == 'o') ocount++;
        else rcount++;
    }
    best = -1;
    res = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= m; j++) {
            for (int k = 0; k <= m; k++) {
                for (int l = 0; l <= m; l++) {
                    if (i+j+k+l <= m) {
                        res = 0;
                        dcount += i;
                        kcount += j;
                        ocount += k;
                        rcount += l;
                        krokod = 0;
                        int use_d = dcount, use_k = kcount, use_o = ocount, use_r = rcount;
                        while (use_d >= 1 && use_k >= 2 && use_o >= 2 && use_r >= 1) {
                            use_d--;
                            use_k -= 2;
                            use_o -= 2;
                            use_r--;
                            krokod++;
                        }
                        res = 7 * krokod + dcount * dcount + kcount * kcount + ocount * ocount + rcount * rcount;
                        best = max(best, res);
                        dcount -= i;
                        kcount -= j;
                        ocount -= k;
                        rcount -= l;
                    }
                }
            }
        }
    }
    cout << best << endl;
}
