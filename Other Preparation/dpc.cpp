// code by savir singh
// https://dmoj.ca/problem/dpc
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;

const int MAX = 1e5+2;
int n, activity[MAX][4], dp[MAX][4];

// dp state:
// dp[i][j] = total points of happiness by doing first i problems ending on activity j

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++) {cin >> activity[i][1] >> activity[i][2] >> activity[i][3];}
    for (int i=0; i<=n-1; i++) {
        for (int j=1; j<=3; j++) {
            for (int k=1; k<=3; k++) {
                if (j == k) continue;
                dp[i+1][k] = max(dp[i+1][k], dp[i][j] + activity[i+1][k]);
            }
        }
    }
    cout << max(dp[n][1], max(dp[n][2], dp[n][3])) << endl;
}
