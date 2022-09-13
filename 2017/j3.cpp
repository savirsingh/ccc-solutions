// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, power;
    cin >> a >> b >> c >> d >> power;
    int power_needed = abs(c-a)+abs(d-b);
    if (power>=power_needed) {
        if (power_needed%2==0 && power%2==0) {
            cout << "Y";
        }
        else if (power_needed%2!=0 && power%2!=0) {
            cout << "Y";
        }
        else {
            cout << "N";
        }
    }
    else {
        cout << "N";
    }
}
