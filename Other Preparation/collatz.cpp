// code by savir singh
// https://dmoj.ca/problem/collatz
// 15/15

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
    cin >> n;
    int counter=0;
    while (n!=1) {
        if (n%2==0) {
            n/=2;
        }
        else {
            n*=3;
            n++;
        }
        counter++;
    }
    cout << counter;
}
