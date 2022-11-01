// code by savir singh
// https://dmoj.ca/problem/vmss15c1p2
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
const int MAX=103;
char graph[MAX][MAX];
int r, c, s=0;

// flood fill algorithm
void count_rooms(int i, int j)
{
    graph[i][j]='V'; // mark visited
    if (i<r && graph[i+1][j]=='.') count_rooms(i+1, j);
    if (i>1 && graph[i-1][j]=='.') count_rooms(i-1, j);
    if (j>1 && graph[i][j-1]=='.') count_rooms(i, j-1);
    if (j<c && graph[i][j+1]=='.') count_rooms(i, j+1);
}

// driver code
bit32 main()
{
    cin >> r >> c;
    for (int i=1; i<=r; i++) {
        for (int j=1; j<=c; j++) {
            cin >> graph[i][j];
        }
    }
    for (int i=1; i<=r; i++) {
        for (int j=1; j<=c; j++) {
            if (graph[i][j]=='.') { // if empty space
                count_rooms(i, j);
                s++;
            }
        }
    }
    cout << s << "\n"; // number of rooms
}
