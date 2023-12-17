// code by savir singh
// 15/15 on DMOJ

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mm = 1e5 + 1;
int T, N;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while(T--) {
        cin >> N;
        deque<int> m, b, l;
        for (int i = 1, a; i <= N; i++) {
            cin >> a;
            m.push_back(a);
        }
        l.push_back(0);
        bool no = false;
        while (true) {
            if (l.size() == N + 1) {
                break;
            }
            else if (!m.empty() && m.back() == l.back() + 1) {
                l.push_back(m.back());
                m.pop_back();
            }
            else if (!b.empty() && b.back() == l.back() + 1) {
                l.push_back(b.back());
                b.pop_back();
            }
            else if (!m.empty()) {
                b.push_back(m.back());
                m.pop_back();
            }
            else {
                no = true;
                break;
            }
        }
        if (!no) {
            cout << "Y\n";
        }
        else cout << "N\n";
    }
}
