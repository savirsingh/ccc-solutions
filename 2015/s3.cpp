// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int g, p;
    cin >> g >> p;
    int num=0;
    set<int> available;
    for (int i=1; i<=g; i++) {
        available.insert(i);
    }
    for (int i=0; i<p; i++) {
        int a; cin >> a;
        auto it = available.upper_bound(a);
        if (it != available.begin()) {
            it--;
            num++;
            available.erase(it);
        }
        else break;
    }
    cout << num << endl;
}
