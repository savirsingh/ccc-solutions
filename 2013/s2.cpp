// code by savir singh
// annoying & fun at the same time lol

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
#define pii pair<int, int>

// all vars
int W, N;
vector<int> bridge;
vector<int> order;
int pass=0;

// sum function
int sum()
{
    int _s=0;
    for (int i : bridge) {
        _s+=i;
    }
    return _s;
}

// driver code
bit32 main()
{
    cin >> W >> N;
    for (int i=0; i<N; i++) {
        // add everything to vector so that
        // we can play around with it as
        // much as we want later.
        int w; cin >> w;
        order.pb(w);
    }
    for (int i=0; i<4; i++) {
        if (order[i]+sum()>W) {
            cout << pass << "\n";
            return false;
        }
        bridge.pb(order[i]);
        pass++;
    }
    for (int i=4; i<N; i++) {
        if (order[i]+sum()-bridge[0]<=W) {
            bridge.pb(order[i]);
            bridge.del(bridge.begin()+1);
            pass++;
        }
        else {
            cout << pass << "\n";
            return false;
        }
    }
    cout << N << "\n"; // they can all pass
}
