// code by savir singh
// my initial solution used adjacency matrix and
// therefore used too much memory. it passed on
// the ccc grader but not on dmoj. 
// i wrote the program again using adjacency
// list instead and it worked on dmoj.

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
int n, m, option;
bool visited[MAX];
int times[MAX];
int minpages=MAX;

// driver code
bit32 main()
{
    scani(n);
    vector<int> graph[MAX];
    vector<int> endings;
    for (int i=1; i<=n; i++) {
        scani(m);
        for (int j=1; j<=m; j++) {
            scani(option);
            graph[i].pb(option);
        }
        if (m==0) {
            endings.pb(i);
        }
    }
    deque<int> deq;
    deq.pb(1);
    visited[1]=true;
    times[1]=1;
    int c=1;
    while (!deq.empty()) {
        int n=deq.front(); deq.pop_front();
        if (find(endings.begin(), endings.end(), n)!=endings.end()) {
            minpages=min(minpages, times[n]);
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
