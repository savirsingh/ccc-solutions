// code by savir singh
// https://dmoj.ca/problem/sac22cc5jp3
// 100/100

#include <bits/stdc++.h>

using namespace std;
map<int, set<string>> m;
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int p, q;
    cin >> p >> q;
    while (q--) {
        int a, b;
        string c;
        cin >> a >> b >> c;
        if (a==2) {
            m[b].insert(c);
        }
        else {
            if (m[b].find(c)!=m[b].end()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
    }
}
