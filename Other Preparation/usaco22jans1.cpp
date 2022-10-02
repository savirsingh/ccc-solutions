// code by savir singh
// https://dmoj.ca/problem/usaco22jans1
// 120/120
// olympiads school only

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

// solve function (recursive)
int solve(int a, int b)
{
    int moves=0;
    if (a==b) {return 0;}
    if (a>b) {
        if (a%2==1) {
            a++;
            moves++;
        }
        a/=2;
        moves++;
        return solve(a, b)+moves;
    }
    else if (a<=b/2) {
        if (b%2==1) {
            b--;
            moves++;
        }
        b/=2;
        moves++;
        return solve(a, b)+moves;
    }
    else {
        int difference=b-a;
        if (a%2==1) {
            a++;
            moves++;
        }
        if (b%2==1) {
            b--;
            moves++;
        }
        return min(difference, solve(a/2, b/2)+2+moves);
    }
}

// driver code
bit32 main()
{
    int t; scani(t);
    while (t--) {
        int a, b;
        scani(a); scani(b);
        cout << solve(a, b) << "\n";
    }
}
