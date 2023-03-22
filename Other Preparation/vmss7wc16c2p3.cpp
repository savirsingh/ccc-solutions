// code by savir singh

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MM = 1e6 + 1;
int n, m, a[MM], b[MM], ind[MM], orig[MM];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        orig[a] = i;
    }
    cin >> m;
    for (int i = 1, a; i <= m; i++) {
        cin >> a;
        ind[i] = orig[a];
    }
    vector<int> lcs;
    for (int i = 1; i <= m; i++) {
        if (!ind[i]) continue;
        if (lcs.empty()) {
            lcs.push_back(ind[i]);
            continue;
        }
        if (ind[i] > lcs[lcs.size()-1]) lcs.push_back(ind[i]);
        else {
            int index = lower_bound(lcs.begin(), lcs.end(), ind[i]) - lcs.begin();
            lcs[index] = ind[i];
        }
    }
    cout << lcs.size() << endl;
}
