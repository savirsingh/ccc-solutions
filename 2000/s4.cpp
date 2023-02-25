// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAX = 6000;
int dista, clubs, dp[MAX], dist[MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(dp, 0x3f, sizeof dp);
    cin >> dista >> clubs;
    for (int i = 1; i <= clubs; i++) {
        cin >> dist[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= clubs; i++) {
        for (int j = dist[i]; j <= dista; j++) {
            dp[j] = min(dp[j], dp[j - dist[i]] + 1);
        }
    }
    if (dp[dista] == 0x3f3f3f3f) cout << "Roberta acknowledges defeat." << endl;
    else cout << "Roberta wins in " << dp[dista] << " strokes." << endl;
}
