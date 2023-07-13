#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define pii tuple<ll, ll>
#define mt make_tuple
#define pb push_back
#define eb emplace_back

const int MM = 2e5 + 1;
int k;
ll n, dp[MM];
vector<pii> pa = {mt(0, 0)};

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

int32_t main() {
    scanf("%lld %d", &n, &k);
    for (int i = 1; i <= k; ++i) {
        ll a, b; scanf("%lld %lld", &a, &b);
        pa.eb(b, a); // to sort by the end time
    }
    sort(pa.begin(), pa.end());
    for (int i = 1; i <= k; ++i) {
        ll s = get<1>(pa[i]), e = get<0>(pa[i]); // back to original form
        int res = upper_bound(pa.begin(), pa.end(), mt(s, 0)) - pa.begin() - 1;
        dp[i] = max(dp[i-1], dp[res] + e - s + 1);
    }
    printf("%lld\n", n - dp[k]);
}