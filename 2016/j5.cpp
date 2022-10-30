// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll q, n;
    cin >> q >> n;
    vector<ll> d (n);
    vector<ll> p (n);
    ll total=0;
    for (int i=0; i<n; i++) {
        cin >> d[i];
    }
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }
    if (q==1) {
        sort(d.begin(), d.end());
        sort(p.begin(), p.end());
        for (int j=0; j<n; j++) {
            total+=max(d[j], p[j]);
        }
    }
    else {
        sort(d.begin(), d.end());
        sort(p.rbegin(), p.rend());
        for (int j=0; j<n; j++) {
            total+=max(d[j], p[j]);
        }
    }
    cout << total;
}
