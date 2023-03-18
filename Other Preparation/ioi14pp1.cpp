// code by savir singh
// https://dmoj.ca/problem/ioi14pp1
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 1001;
int n, grid[MM][MM], dp[MM][MM], ways[MM];

// state:
// dp[i][j] = largest square w/ corner (i, j)

int32_t main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 1) dp[i][j]++;
        }
    }
    int best = 0;
    for (int i = 1; i <= n; i++) {
        ways[grid[1][i]]++;
        if (i != 1) ways[grid[i][1]]++;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (grid[i][j] == 0) continue;
            dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
            ways[dp[i][j]]++;
            best = max(best, dp[i][j]);
        }
    }
    cout << best * ways[best] << endl;
}
