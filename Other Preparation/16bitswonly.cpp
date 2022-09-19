// code by savir singh

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
bit32 main()
{
    int n;
    scani(n);
    for (int i=0; i<n; i++) {
        int a, b, p;
        scani(a); scani(b); scani(p);
        if (a*b==p) {
            print("POSSIBLE DOUBLE SIGMA");
        }
        else {
            print("16 BIT S/W ONLY");
        }
        print("\n");
    }
}
