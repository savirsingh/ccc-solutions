// code by savir singh
// https://dmoj.ca/problem/p100ex4
// 30/30

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
    map<str, str> m = {{"MG","midget girls"}, {"MB","midget boys"}, {"JG","junior girls"}, {"JB","junior boys"},
    {"SG","senior girls"}, {"SB","senior boys"}};
    str s; cin >> s;
    if (m.find(s)==m.end()) {
        print("invalid code");
    }
    else {
        cout << m[s];
    }
}
