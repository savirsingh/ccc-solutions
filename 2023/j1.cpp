// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main() {
    int p; cin >> p;
    int c; cin >> c;
    int ans=0;
    ans+=50*p-10*c;
    if (p>c) ans+=500;
    cout << ans << endl;
}
