// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MM = 5001;
int n, k, rep[MM], dp[MM];
pii v[MM];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 1, vi; i <= n; i++) {
        cin >> vi; v[i] = make_pair(vi, i);
    }
    sort(v + 1, v + n + 1);
    int idx = 1;
    for (int i = 1; i <= n; i++) {
        rep[v[i].second] = idx;
        if (i % k == 0) idx++;
    }
    int lis = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (rep[i] >= rep[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        lis = max(lis, dp[i]);
    }
    cout << n - lis << endl;
}
