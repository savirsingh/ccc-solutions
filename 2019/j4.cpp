// code by savir singh

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;

int main() {
    vector<vector<ll>> original = {{1, 2}, {3, 4}};
    string input;
    cin >> input;
    for (int i=0; i<input.size(); i++) {
        // horizontal flip
        if (input[i]=='H') {
            vector<ll> wait=original[0];
            original[0]=original[1];
            original[1]=wait;
        }
        // vertical flip
        else {
            ll wait=original[0][0];
            original[0][0] = original[0][1];
            original[0][1] = wait;
            wait=original[1][0];
            original[1][0] = original[1][1];
            original[1][1] = wait;
        }
    }
    for (int j=0; j<original.size(); j++) {
        cout << original[j][0] << " " << original[j][1] << "\n";
    }
}
