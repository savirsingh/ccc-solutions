// code by savir singh

#include <iostream>
#include <stack>
using namespace std;
#define pii pair<int, int>
#define ll long long

const int MM = 3e5 + 1;
ll n; // Change 'int' to 'll'
ll a[MM], lmx[MM], rmx[MM], lmn[MM], rmn[MM], mx = 0, mn = 0;
stack<pii> stk;

// fast i/o
void read(ll &number) // Change 'int' to 'll'
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
        number = number * 10 + c - 48;
    if (negative)
        number *= -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    read(n);
    for (ll i = 1; i <= n; i++) read(a[i]);
    for (ll i = 1; i <= n; i++) {
        while (!stk.empty() && stk.top().first < a[i]) stk.pop();
        if (!stk.empty()) lmx[i] = stk.top().second;
        stk.push({a[i], i});
    }
    stk = stack<pii>();
    for (ll i = 1; i <= n; i++) {
        while (!stk.empty() && stk.top().first > a[i]) stk.pop();
        if (!stk.empty()) lmn[i] = stk.top().second;
        stk.push({a[i], i});
    }
    stk = stack<pii>();
    for (ll i = n; i >= 1; i--) {
        while (!stk.empty() && stk.top().first <= a[i]) stk.pop();
        if (!stk.empty()) rmx[i] = stk.top().second;
        else rmx[i] = n + 1;
        stk.push({a[i], i});
    }
    stk = stack<pii>();
    for (ll i = n; i >= 1; i--) {
        while (!stk.empty() && stk.top().first >= a[i]) stk.pop();
        if (!stk.empty()) rmn[i] = stk.top().second;
        else rmn[i] = n + 1;
        stk.push({a[i], i});
    }
    for (ll i = 1; i <= n; i++) mx += a[i] * (i - lmx[i]) * (rmx[i] - i);
    for (ll i = 1; i <= n; i++) mn += a[i] * (i - lmn[i]) * (rmn[i] - i);
    cout << mx - mn << endl;
}
