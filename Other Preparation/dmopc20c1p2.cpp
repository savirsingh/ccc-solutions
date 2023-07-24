// code by savir singh
// https://dmoj.ca/problem/dmopc20c1p2
// 1/1

#include <iostream>
using namespace std;

const int mm = 1e6 + 1;
int n, d, psa[mm];

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
    read(n);read(d);
    for (int i = 1,a; i <= n; i++) {
        read(a);psa[i] = psa[i - 1] + a;
    }
    int st = 1;
    for (; d--;) {
        int k;read(k);
        if (psa[st + k - 1] - psa[st - 1] >= psa[n] - psa[st + k - 1]) {
            cout << psa[st + k - 1] - psa[st - 1] << endl;
            st += k;
        } else {
            cout << psa[n] - psa[st + k - 1] << endl;
            n = st + k - 1;
        }
    }
}
