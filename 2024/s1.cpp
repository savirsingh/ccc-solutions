// code by savir singh
// https://dmoj.ca/problem/ccc24s1
// 15/15

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int mm = 2e6 + 2;
int N, h[mm];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> h[i];
    for (int i = N + 1; i <= 2 * N; i++) {
        h[i] = h[i - N];
    }
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (h[i ] == h[i + N / 2]) cnt++;
    }
    cout << cnt << endl;

    return 0;
}
