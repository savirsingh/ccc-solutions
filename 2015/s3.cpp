// code by savir singh
// 6/15 - TLE
// i may work on this problem more later...

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll g, p;
    cin >> g >> p;
    vector<ll> occupied;
    bool stop=false;
    ll canland=0;
    for (int i=0; i<p; i++) {
        ll a;
        cin >> a;
        if (stop==false) {
            while (a--) {
                if (find(occupied.begin(), occupied.end(), a) == occupied.end()) {
                    occupied.push_back(a);
                    canland++;
                    stop=false;
                    break;
                }
                else {
                    stop=true;
                }
            }
        }
    }
    cout << canland;
}
