// code by savir singh
// 15/15 on CCC Grader, but this code doesn't work on DMOJ.
// check other code for DMOJ-specific

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

// initialize variables and MAX
const int MAX = 10001;
static int n, m, option;
static int graph[MAX][MAX];
static bool visited[MAX];
static int times[MAX];
static int minpages=MAX;

// driver code
bit32 main()
{
    scani(n);
    vector<int> endings;
    for (int i=1; i<=n; i++) {
        scani(m);
        for (int j=1; j<=m; j++) {
            scani(option);
            graph[i][j]=option;
        }
        if (m==0) {
            endings.pb(i);
        }
    }
    deque<int> deq;
    deq.pb(1);
    visited[1]=true;
    times[1]=0;
    int c=0;
    while (!deq.empty()) {
        int n=deq.front(); deq.pop_front();
        if (find(endings.begin(), endings.end(), n)!=endings.end()) {
            minpages=min(minpages, times[n]+1);
        }
        for (int adj : graph[n]) {
            if (!visited[adj]) {
                c++;
                visited[adj]=true;
                deq.pb(adj);
                times[adj]=times[n]+1;
            }
        }
    }
    if (c==n) {print("Y\n");}
    else {print("N\n");}
    printi(minpages);
}
