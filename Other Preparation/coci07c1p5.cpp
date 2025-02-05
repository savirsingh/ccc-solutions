// code by savir singh
// https://dmoj.ca/problem/coci07c1p5
// 10/10

#include <bits/stdc++.h>
using namespace std;

const int mm = 1e5 + 1;
int N, B, a[mm], midp, charge = 0, tot = 0;
map<int, int> cnt1, cnt2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> B;
    for (int i = 1, ab; i <= N; i++) {
        cin >>  ab;
        if (ab < B) a[i] = -1;
        else if (ab > B) a[i] = 1;
        else midp = i;
        charge += a[i];
    }
    cnt1[0] = 1; cnt2[0] = 1; // u can take away nothing ofc
    int sum = 0;
    for (int i = 1; i < midp; i++) {
        sum += a[i];
        cnt1[sum]++;
    }
    sum = 0;
    for (int i = N; i >= (midp + 1); i--) {
        sum += a[i];
        cnt2[sum]++;
        //cout << a[i] << endl;
    }
    for (auto [i,j] : cnt1) {
        tot += (cnt1[i] * cnt2[charge-i]);
        //cout << i << " " << j << " " << (cnt1[i] * cnt2[charge-i]) << endl;
    }
    cout << tot << endl;


    return 0;
}
