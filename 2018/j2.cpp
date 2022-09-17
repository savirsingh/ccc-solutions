// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%c", &x)
#define scanc(x) scanf("%s", &x)
#define printi(x) printf("%lld", x); printf("%s", "\n")
#define print(x) printf("%s", x); printf("%s", "\n")
#define printc(x) printf("%c", x); printf("%s", "\n")

bit32 main()
{
    int n, both_days=0;
    scani(n);
    string day_1, day_2;
    cin >> day_1 >> day_2;
    for (int i=0; i<n; i++) {
        if (day_1[i]=='C' && day_2[i]=='C') {
            both_days++;
        }
    }
    printi(both_days);
}
