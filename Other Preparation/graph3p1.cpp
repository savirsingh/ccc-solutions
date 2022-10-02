// code by savir singh

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

const int MAX=30003;
vector<int> graph[MAX];
bool visited[MAX];
int dist[MAX];

// driver code
bit32 main()
{
    int n, m; cin >> n >> m;
    vector<int> distances;
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    int k; cin >> k;
    deque<int> deq;
    for (int i=0; i<k; i++) {
        int l; cin >> l;
        deq.pb(l);
        visited[l]=true;
        dist[l]=0;
    }
    while(!deq.empty()) {
        int curr=deq.front();
        deq.pop_front();
        for (int adj : graph[curr]) {
            if (!visited[adj]) {
                deq.pb(adj);
                visited[adj]=true;
                dist[adj]=dist[curr]+1;
                distances.pb(dist[adj]);
            }
        }
    }
    cout << *max_element(distances.begin(), distances.end());
}
