// code by savir singh
// https://dmoj.ca/problem/oly18novp7
// 130/130
// olympiads school homework

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

// additional comments exclusive to problem

// initializing variables and MAX
int x,y;
const int MAX = 100001;
int times[MAX];
deque<int> deq;

// driver code
bit32 main(){
    scani(x); scani(y);
    deq.pb(x);
    memset(times, 100, sizeof(times));
    times[x]=0;
    while (!deq.empty()) {
        int n=deq.front(); deq.pop_front();
        int lvl = times[n]+1;
        for (int e : {n+1, n-1, 2*n}){
            if(e<0 || e>100000 || lvl >= times[e]){
                continue;
            }
            times[e]=lvl;
            deq.pb(e);
        }
    }
    printi(times[y]);
}
