// code by savir singh

// idea:
// Notice that answers to longer subarrays are partly based on 
// the answers to shorter subarrays. Specifically, you only need
// to calculate the abs(1st value - last value) in the subarray
// and add the answer for the middle range, which was previously
// calculated already and can be stored. In this implementation,
// pre[i][j] stores the sum of absolute differences of the pairs
// for the subarray from position i to position j. In O(N) time,
// we can then calculate the answer for each index using
// precomputed values and finding the minimum answer in the range.

// Overall Time Complexity: O(N^2)

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 5008;
int n, h[MAX], pre[MAX][MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> h[i];
    // calc for all of them
    for (int i=1; i<=n; i++) {
        // window size i
        int l = 1, r = i, best = 1e18;
        while (r <= n) {
            pre[l][r] = abs(h[l] - h[r]) + pre[l+1][r-1];
            //cout << i << " " << l << " " << r << " " << pre[l][r] << endl;
            best = min(best, pre[l][r]);
            l++; r++;
        }
        cout << best;
        if (i!=n) cout << " ";
    }
    cout << endl;
}
