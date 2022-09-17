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
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);

bit32 main()
{
    int a, b, c, d;
    scani(a);
    scani(b);
    scani(c);
    scani(d);
    int first=a, second=a+b, third=a+b+c, fourth=a+b+c+d;
    printi(0); print(" "); printi(first); print(" "); printi(second); print(" "); printi(third);
    print(" "); printi(fourth);
    print("\n");
    printi(a); print(" "); printi(first-a); print(" "); printi(second-a); print(" ");
    printi(third-a); print(" "); printi(fourth-a);
    print("\n");
    printi(a+b); print(" "); printi(first-a+b); print(" "); printi(second-a-b); print(" ");
    printi(third-a-b); print(" "); printi(fourth-a-b);
    print("\n");
    printi(a+b+c); print(" "); printi(first-a+b+c); print(" "); printi(second-a-b+c); print(" ");
    printi(third-a-b-c); print(" "); printi(fourth-a-b-c);
    print("\n");
    printi(a+b+c+d); print(" "); printi(first-a+b+c+d); print(" "); printi(second-a-b+c+d); print(" ");
    printi(third-a-b-c+d); print(" "); printi(fourth-a-b-c-d);
}
