// code by savir singh

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int p, n, r;
    int days=0;
    cin >> p >> n >> r;
    int originalr = r;
    int originaln = n;
    while (n<=p) {
        r=pow(originalr, days+1);
        r*=originaln;
        n+=r;
        days++;
    }
    cout << days;
}
