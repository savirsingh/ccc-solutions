// code by savir singh

include <bits/stdc++.h>
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
int P, Y, T;

// simulation-type function
bool use(int mid)
{
    int x=0;
    for (int i=0; i<Y; i++) {
        x+=mid;
        x*=P;
        x/=100;
        if (x>=T) return true;
    }
    return false;
}

// driver code
bit32 main()
{
    cin >> P >> Y >> T;
    P+=100;
    int left=0, right=T;
    while (left+1<right) {
        int mid=(left+right)/2;
        if (use(mid)) {
            right=mid;
        }
        else {
            left=mid;
        }
    }
    cout << right << "\n";
}
