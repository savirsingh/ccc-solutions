// code by savir singh
// https://dmoj.ca/problem/cpc21c1p2
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MM = 2e5 + 1;
int n, ret;
vector<int> a, b;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;n*=2;n+=1;
    for (int i = 0, x; i < n; i++) {
        cin >> x; ret ^= x; a.push_back(x);
    }
    for (int i = 0, x; i < n; i++) {
        cin >> x; ret ^= x; b.push_back(x);
    }
    for (int i = 0 ; i < n; i++) b[i] ^= ret;
    sort(a.begin(), a.end());sort(b.begin(), b.end());
    for (int i = 0 ; i < n; i++) {
        if (a[i] != b[i]) {ret = -1;break;}
    }
    cout << ret << endl;
}
