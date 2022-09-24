// code by savir singh
// 15/15 on DMOJ & CCC Grader
// this code has comments because it may be hard to understand.

// a score of 10/15 is easily achievable.
// the remaining 5 marks can be obtained by recogizing that the
// colour of a cell depends on the parity of the number of
// operations on that cell. for instance, if you go over a cell
// 10 times, it would produce the same result as going over that
// cell 0 times. similarly, going over a cell 11 times produces the
// same result as going over a cell 1 time. after making this
// observation, we know that cells with an even number of operations
// would be black, while cells with an odd number of operations
// would be gold. then, we simply output the gold cells count.

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
