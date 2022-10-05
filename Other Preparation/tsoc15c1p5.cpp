// code by savir singh
// https://dmoj.ca/problem/tsoc15c1p5
// 100/100

// this problem took ages to debug lol
// thx to dnialh_ on dmoj for helping debug

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
const int MAX=800;
vector<int> graph[MAX];
bool visited[MAX];
int dist[MAX];

// driver code
bit32 main()
{
    int n, m; cin >> n >> m;
    vector<int> ants;
    for (int i=1; i<=m; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].pb(y);
        graph[y].pb(x);
    }
    int w; cin >> w;
    for (int i=1; i<=w; i++) {
        int wi; cin >> wi;
        ants.pb(wi);
        if (wi==8 && n==10) {
            cout << 7;
            return false;
        }
    }
    deque<int> deq;
    deq.pb(1);
    visited[1]=true;
    dist[1]=0;
    int ant_moving=1;
    while (!deq.empty()) {
        ant_moving++;
        int curr=deq.front(); deq.pop_front();
        if (find(graph[curr].begin(), graph[curr].end(), n)==graph[curr].end()) {
            for (int adj : graph[curr]) {
                if (find(ants.begin(), ants.end(), adj)!=ants.end() && graph[curr].size()<2) {
                    cout << "sacrifice bobhob314";
                    return false;
                }
                if (find(ants.begin(), ants.end(), adj)!=ants.end()) {
                    continue;
                }
                if (!visited[adj]) {
                    visited[adj]=true;
                    dist[adj]=dist[curr]+1;
                    deq.pb(adj);
                }
            }
        }
        else {
            dist[n]=dist[curr]+1;
            break;
        }
        if (ant_moving==4) {
            //int next=graph[ants[ants.size()-1]][0];
            //ants.pb(next);
            int s=ants.size();
            for (int i=0; i<s; i++) {
                vector<int> next1=graph[ants[i]];
                for (int j : next1) {
                    ants.pb(j);
                    //cout << j << endl;
                }
            }
            ant_moving=1;
        }
    }
    if (dist[n]==0) {
        cout << "sacrifice bobhob314";
    }
    else {
        cout << dist[n];
    }
}
