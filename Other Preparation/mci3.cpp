// code by savir singh
// https://dmoj.ca/problem/mci3
// 20/20

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
    int n; scani(n);
    vector<char> original;
    char fin[n];
    for (int i=0; i<n; i++) {
        char letter; cin >> letter;
        original.pb(letter);
    }
    for (int i=0; i<n; i++) {
        int index; cin >> index;
        index--;
        fin[index]=original[i];
    }
    for (char c : fin) {
        printc(c);
    }
}
