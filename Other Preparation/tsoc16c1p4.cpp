// code by savir singh
// https://dmoj.ca/problem/tsoc16c1p4
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
const int MAX=500;
char graph[MAX][MAX];
bool visited[MAX][MAX];

// driver code
bit32 main()
{
    int r, c;
    cin >> r >> c;
    int monkeys=0;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            char a; cin >> a;
            graph[i][j]=a;
        }
    }
    for (int x=0; x<r; x++) {
        for (int y=0; y<c; y++) {
            if (graph[x][y]=='M' && !visited[x][y]) {
                monkeys++;
                deque<pii> deq;
                deq.pb({x, y});
                vector<pii> p = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
                while (!deq.empty()) {
                    pii curr=deq.front();
                    deq.pop_front();
                    for (pii a : p) {
                        a.first+=curr.first;
                        a.second+=curr.second;
                        if (graph[a.first][a.second]!='#' && !visited[a.first][a.second]) {
                            visited[a.first][a.second]=true;
                            deq.pb({a.first, a.second});
                        }
                    }
                }
            }
        }
    }
    cout << monkeys;
}
