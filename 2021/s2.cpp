// code by savir singh
// 15/15 on DMOJ & CCC Grader
// this code has comments because it may be hard to understand.

#include <bits/stdc++.h>
#define ll long long
#define int long long
#define del erase
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n, k;
    cin >> m >> n >> k;
    vector<ll> rows (m, 0);
    vector<ll> cols (n, 0);
    ll gold_squares=0;
    for (int i=0; i<k; i++) {
        char rc;
        ll n;
        cin >> rc >> n;
        n--;
        if (rc=='R') {
            rows[n]++;
        }
        else {
            cols[n]++;
        }
    }
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if ((rows[i]+cols[j])%2!=0) {
                gold_squares++;
            }
        }
    }
    cout << gold_squares;
}
