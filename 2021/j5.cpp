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
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // initialize everything and read m, n, and k
    ll m, n, k;
    cin >> m >> n >> k;
    vector<ll> rows (m, 0);
    vector<ll> cols (n, 0);
    ll gold_squares=0;
    // read r/c & number and add number of strokes to the respective index
    // in either the rows vector or the cols vector.
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
    // go through grid and check if number of strokes is even. if yes, that
    // cell must be a black square. else, it must be a gold square.
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if ((rows[i]+cols[j])%2!=0) {
                gold_squares++;
            }
        }
    }
    // output the gold squares count.
    cout << gold_squares;
}
