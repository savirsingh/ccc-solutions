// code by savir singh
// https://dmoj.ca/problem/bf3
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

// function to check if a given integer
// a is prime or not
bool prime(int a)
{
    if (a==0 || a==1) {
        return false;
    }
    else if (a==2) {
        return true;
    }
    for (int i=2; i<pow(a, 0.5)+1; i++) {
        if (a%i==0) {
            return false;
        }
    }
    return true;
}

// driver code
bit32 main()
{
    int n;
    scani(n);
    while (!prime(n)) {
        n++;
    }
    printi(n);
}
