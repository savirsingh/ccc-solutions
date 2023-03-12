// code by savir singh
// https://dmoj.ca/problem/sac22cc3p1
// 100/100

#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int MAX = 800;

int h, s, q;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> h >> s >> q;
    while (q--) {
        h -= s;
        cout << h << endl;
    }
}
