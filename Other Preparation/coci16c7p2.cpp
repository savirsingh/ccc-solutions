// code by savir singh
// https://dmoj.ca/problem/coci16c7p2
// 10/10

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define bit32 int32_t
#define pii pair<int, int>

int n;

//(k+y)(k-y+1)=2N
//where y is first addend
//and k is last addend
//a=k+y
//b=k-y+1
//=>2y-1=a-b
//=>y=(a-b+1)/2
//=>k=a-y
//so we can bs for all vals of a,b

bit32 main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    n *= 2;
    vector<pii> work;
    int lo = 2, hi = pow(n, 0.5);
    for (int b = lo; b <= hi; b++) {
        int a = n / b;
        if ((n%a==0) && ((a-b+1)%2==0)) {
            //a*b=n
            //cout << "s " << a << " " << b << endl;
            int y = (a-b+1)/2;
            int k = a-y;
            cout << y << " " << k << endl;
        }
    }
}
