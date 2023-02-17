// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int ans=0;
    map<string, int> shu = {{"Poblano", 1500}, {"Mirasol", 6000}, {"Serrano", 15500}, {"Cayenne", 40000}, {"Thai", 75000}, {"Habanero", 125000}};
    while (n--) {
        string a;
        cin >> a;
        ans+=shu[a];
    }
    cout << ans << endl;
}
