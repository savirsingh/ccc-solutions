// code by savir singh
// https://dmoj.ca/problem/aac2p0
// 30/30

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);

// driver code
bit32 main() {
    int n; cin >> n;
    int x=n-1, a;
    if ((n+x)%2==0) {
        cout << (n+x)/2;
    }
    else {
        x--;
        cout << (n+x)/2;
    }
}
