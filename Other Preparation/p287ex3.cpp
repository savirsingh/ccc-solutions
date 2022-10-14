// code by savir singh
// https://dmoj.ca/problem/p287ex3
// 10/10

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
    vector<double> nums;
    while (n--) {
        double x; cin >> x;
        nums.pb(x);
    }
    cout << fixed << setprecision(2) << *min_element(nums.begin(), nums.end());
}
