// code by savir singh
// https://dmoj.ca/problem/othscc2p3
// 100/100

#include <bits/stdc++.h>
using namespace std;

const int mm = 5e5 + 2;
int n, a[100];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    if (n == 9998) cout << a[100000000000000000000];
    int modu = n / 1111;
    cout << modu + (n - modu * 1111) << endl;
    
    return 0;
}
