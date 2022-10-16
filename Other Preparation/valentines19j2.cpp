// code by savir singh
// https://dmoj.ca/problem/valentines19j2
// 100/100

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
#define pii pair<int, int>

// driver code
bit32 main()
{
    int n; cin >> n;
    int pink=0;
    while (n--) {
        int r, g, b; cin >> r >> g >> b;
        if (r>=240 && r<=255 && g>=0 && g<=200 && b>=95 && b<=220) {
            pink++;
        }
    }
    cout << pink;
}
