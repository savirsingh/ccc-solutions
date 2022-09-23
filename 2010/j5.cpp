// code by savir singh

#include <bits/stdc++.h>
using namespace std;
// macros
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
#define ppi pair<int, int>

const int MAX=10;
bool visited[MAX][MAX];
vector<ppi> temp;
vector<ppi> vec;

// driver code
bit32 main()
{
    ppi s, e;
    int c=0;
    cin >> s.first >> s.second >> e.first >> e.second;
    temp.pb(s);
    vec.pb(s);
    visited[s.first][s.second]=true;
    while (vec.size()>0) {
        for (ppi adj : vec) {
            if (adj.first==e.first && adj.second==e.second) {
                printi(c);
                return false;
            }
            else {
                int x=adj.first, y=adj.second;
                if (x+1<9) {
                    if (y+2<9) {
                        if (!visited[x+1][y+2]) {
                            visited[x+1][y+2]=true;
                            ppi n;
                            n.first=x+1;
                            n.second=y+2;
                            temp.pb(n);
                        }
                    }
                    if (y-2>0) {
                        if (!visited[x+1][y-2]) {
                            visited[x+1][y-2]=true;
                            ppi n;
                            n.first=x+1;
                            n.second=y-2;
                            temp.pb(n);
                        }
                    }
                }
                if (x+2<9) {
                    if (y+1<9) {
                        if (!visited[x+2][y+1]) {
                            visited[x+2][y+1]=true;
                            ppi n;
                            n.first=x+2;
                            n.second=y+1;
                            temp.pb(n);
                        }
                    }
                    if (y-1>0) {
                        if (!visited[x+2][y-1]) {
                            visited[x+2][y-1]=true;
                            ppi n;
                            n.first=x+2;
                            n.second=y-2;
                            temp.pb(n);
                        }
                    }
                }
                if (x-2>0) {
                    if (y+1<9) {
                        if (!visited[x-2][y+1]) {
                            visited[x-2][y+1]=true;
                            ppi n;
                            n.first=x-2;
                            n.second=y+1;
                            temp.pb(n);
                        }
                    }
                    if (y-1>0) {
                        if (!visited[x-2][y-1]) {
                            visited[x-2][y-1]=true;
                            ppi n;
                            n.first=x-2;
                            n.second=y-2;
                            temp.pb(n);
                        }
                    }
                }
                if (x-1>0) {
                    if (y+2<9) {
                        if (!visited[x-1][y+2]) {
                            visited[x-1][y+2]=true;
                            ppi n;
                            n.first=x-1;
                            n.second=y+2;
                            temp.pb(n);
                        }
                    }
                    if (y-2>0) {
                        if (!visited[x-1][y-2]) {
                            visited[x-1][y-2]=true;
                            ppi n;
                            n.first=x-1;
                            n.second=y-2;
                            temp.pb(n);
                        }
                    }
                }
            }
        }
        c++;
        vec=temp;
        temp.clear();
    }
}
