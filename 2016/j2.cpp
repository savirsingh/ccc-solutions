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
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10 >> num11 >> num12 >> num13 >> num14 >> num15 >> num16;
    int total=num1+num2+num3+num4;
    if (num5+num6+num7+num8!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num9+num10+num11+num12!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num13+num14+num15+num16!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num1+num5+num9+num13!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num2+num6+num10+num14!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num3+num7+num11+num15!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    if (num4+num8+num12+num16!=total) {
        cout << "not magic" << "\n";
        return false;
    }
    cout << "magic" << "\n";
}
