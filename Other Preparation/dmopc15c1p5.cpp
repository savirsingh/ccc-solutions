// code by savir singh
// https://dmoj.ca/problem/dmopc15c1p5
// 100/100

#include <iostream>
using namespace std;

const int MM = 251;
int w, h, n, psa[MM][MM], ans = 0;

int sum(int a, int b, int c, int d) {
    return psa[c][d] - psa[a - 1][d] - psa[c][b - 1] + psa[a - 1][b - 1];
}

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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    read(w);read(h);read(n);

    for (int i = 1; i <= h; i++) {
        for (int j = 1, a; j <= w; j++) {
            read(a);
            psa[i][j] = a + psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1];
        }
    }

    int acc = min(w, n);
    for (int wi = 1; wi <= acc; wi++) {
        int hi = min(h, n / wi);
        for (int i = 1; i <= h - hi + 1; i++) { // Corrected the limit for 'i'.
            for (int j = 1; j <= w - wi + 1; j++) { // Corrected the limit for 'j'.
                ans = max(ans, sum(i, j, i + hi - 1, j + wi - 1));
            }
        }
    }

    cout << ans << endl;
}
