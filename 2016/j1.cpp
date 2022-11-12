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
#define pii pair<int, int>

// all vars

// driver code
bit32 main()
{
    int t=6;
    int w=0;
    while (t--) {
        char outcome; cin >> outcome;
        if (outcome=='W') w++;
    }
    if (w==5 || w==6) cout << "1\n";
    else if (w==3 || w==4) cout << "2\n";
    else if (w==1 || w==2) cout << "3\n";
    else cout << "-1\n";
}
