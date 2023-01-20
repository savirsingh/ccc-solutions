// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> indexes;
    for (int i=0; i<n; i++) {
        char a; cin >> a;
        if (a=='S') {
            indexes.insert(i);
        }
    }
    int total=0;
    for (int i=0; i<n; i++) {
        char a; cin >> a;
        if (a=='S' && indexes.find(i)!=indexes.end()) {
            total++;
        }
    }
    if (total<=2) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
