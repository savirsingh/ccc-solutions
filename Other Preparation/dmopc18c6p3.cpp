// code by savir singh
// https://dmoj.ca/problem/dmopc18c6p3
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

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

// all vars
const int MAX=2e5+2;
int N, M;
vector<int> graph[MAX];
bool visited[MAX];

// dfs function
void dfs(int node)
{
    if (visited[node]) return;
    visited[node]=true;
    for (int adj : graph[node]) {
        dfs(adj);
    }
}

// driver code
bit32 main() {
    read(N); read(M);
    for (int i=0; i<M; i++) {
        int a, b; read(a); read(b);
        graph[a].pb(b);
        graph[b].pb(a);
    }
    int components=0;
    for (int i=1; i<=N; i++) {
        if (!visited[i]) {
            dfs(i);
            components++;
        }
    }
    if (M==N-components || M==N-components+1) cout << "YES";
    else cout << "NO";
}
