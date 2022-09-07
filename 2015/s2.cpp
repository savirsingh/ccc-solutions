// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll j, a;
    cin >> j >> a;
    vector<char> jerseys(j);
    ll counter=0;
    for (int i=0; i<j; i++) {
        cin >> jerseys[i];
    }
    for (int i=0; i<a; i++) {
        char c;
        ll d;
        cin >> c >> d;
        d--;
        if (jerseys[d]==c || int(jerseys[d])<int(c)) {
            counter++;
            jerseys[d]='Z';
        }
    }
    cout << counter;
}
