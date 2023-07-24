// code by savir singh
// https://dmoj.ca/problem/mwc15c2p2
// 110/110

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

const int mm = 1e6 + 1;
int n, h[mm], ans[mm];

// fast i/o
inline void read(int &number)
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

inline void solve() {
    stack<int> stk;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        while (!stk.empty() && h[stk.top()] <= h[i]) stk.pop();
        ans.push_back(stk.empty()?i-1:i - stk.top());
        stk.push(i);
    }
    for (int i = 0; i < n - 1; i++) cout << ans[i] << " ";
    cout << ans[n - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    read(n);
    for (int i = 1; i <= n; i++) read(h[i]);
    solve();
}
