// code by savir singh
// https://dmoj.ca/problem/othscc2p4
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

const int mm = 1e6 + 2;
int N, M, Q;
vector<pii> coor[mm];
map<int, int> compress;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M >> Q;
    int index = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            int x; cin >> x;
            compress[x] = ++index;
            coor[index].push_back({i, j});
        }
    }

    for (int i = 1; i <= Q; i++) {
        int a, r1, c1, r2, c2;
        cin >> a >> r1 >> c1 >> r2 >> c2;
        int ca = compress[a];
        bool found = false;
        for (pii j : coor[ca]) {
            if (j.first >= r1 && j.first <= r2 && j.second >= c1 && j.second <= c2) {
                cout << "yes" << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "no" << endl;
    }

    
    return 0;
}
