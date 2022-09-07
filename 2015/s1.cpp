// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll k;
    ll thesum = 0;
    cin >> k;
    vector<ll> instructions(k);
    for (int i=0; i<k; i++) {
        ll a;
        cin >> a;
        if (a==0) {
            instructions.pop_back();
        }
        else {
            instructions.push_back(a);
        }
    }
    for (int j=0; j<instructions.size(); j++) {
        thesum+=instructions[j];
    }
    cout << thesum;
}
