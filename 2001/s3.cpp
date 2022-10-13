// code by savir singh
// using DFS algorithm
// Olympiads Homework

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
#define pii pair<char, char>

// all vars
const int MAX=500;
vector<char> graph[MAX];
bool visited[MAX];
vector<pii> disconnecting;

// dfs function
void reachable(char node)
{
    if (visited[node]) {return;}
    visited[node]=true;
    vector<char> neighbours=graph[node];
    for (char adj : neighbours) {
        reachable(adj);
    }
}

// driver code
bit32 main()
{
    vector<pii> connections;
    while (true) {
        char a, b;
        cin >> a >> b;
        if (a=='*' && b=='*') {
            break;
        }
        graph[a].pb(b);
        graph[b].pb(a);
        pii p={a, b};
        connections.pb(p);
    }
    for (pii connection : connections) {
        memset(visited, 0, sizeof(visited));
        char a=connection.first;
        char b=connection.second;
        graph[a].del(remove(graph[a].begin(), graph[a].end(), b), graph[a].end());
        graph[b].del(remove(graph[b].begin(), graph[b].end(), a), graph[b].end());
        reachable(a);
        if (!visited[b]) {
            disconnecting.pb({a, b});
        }
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for (pii pa : disconnecting) {
        cout << pa.first << pa.second << "\n";
    }
    cout << "There are " << disconnecting.size() << " disconnecting roads.\n";

}
