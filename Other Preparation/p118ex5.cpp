// code by savir singh
// https://dmoj.ca/problem/p118ex5
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
    int n; scani(n);
    vector<double> vec;
    for (int i=0; i<n; i++) {
        double x; cin >> x; vec.pb(x);
    }
    double max_num=*max_element(vec.begin(), vec.end());
    vec.del(remove(vec.begin(), vec.end(), max_num), vec.end());
    for (double d : vec) {
        cout << fixed << setprecision(2) << d << "\n";
    }
    cout << fixed << setprecision(2) << max_num << "\n";
}
