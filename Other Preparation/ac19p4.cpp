// code by savir singh
// https://dmoj.ca/problem/ac19p4
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
#define pii pair<int, int>

// all vars
int N;
set<pii> coors;
int largest;

// driver code
bit32 main() {
    cin >> N;
    for (int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        coors.insert({x, y});
    }

    for (pii i : coors) {
        for (pii j : coors) {
            if (coors.find({i.first, j.second})!=coors.end() && coors.find({j.first, i.second})!=coors.end()) {
                largest = max(largest, abs(j.first - i.first) * abs(j.second - i.second));
            }
        }
    }
    cout << largest << "\n";
}
