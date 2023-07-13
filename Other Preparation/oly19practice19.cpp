#include <bits/stdc++.h>
using namespace std;

const int MM = 1e6 + 1;
int n, k, arr[MM], rem[MM], mxrem[MM], mnrem[MM], ans = 0;

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
    read(n); read(k);
    memset(mnrem, 0x3f, sizeof mnrem);
    for (int i = 1; i <= n; i++) {
        read(arr[i]);
        rem[i] = (rem[i - 1] + arr[i]) % k;
        mxrem[rem[i]] = max(mxrem[rem[i]], i);
        mnrem[rem[i]] = min(mnrem[rem[i]], i);
        if (rem[i] == 0) ans = max(ans, i);
        else ans = max(ans, mxrem[rem[i]] - mnrem[rem[i]]);
    }
    cout << ans << endl;
}