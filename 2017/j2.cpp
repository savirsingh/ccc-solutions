// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, num=0;
    cin >> n >> k;
    for (int i=0; i<=k; i++) {
        num+=n*pow(10, i);
    }
    cout << num;
}
