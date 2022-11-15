// code by savir singh
// https://dmoj.ca/problem/treepractice1
// 100/100
// special thanks to Riolku for helping me debug.

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
const int MAX=5e5+2;
int N;
vector<pii> graph[MAX];
bool visited[MAX];
int longest=0;
vector<int> dist (MAX);
set<int> diameter_nodes;
map<int, int> pre;
int node_needed;

// bfs function
void bfs(int node)
{
    memset(visited, 0, sizeof(visited));
    visited[node]=true;
    dist[node]=0;
    deque<pii> deq;
    deq.pb({node, 0});
    int lvl=0;
    while (!deq.empty()) {
        pii curr=deq.front();
        deq.pop_front();
        lvl+=curr.second;
        for (pii adj : graph[curr.first]) {
            if (!visited[adj.first]) {
                visited[adj.first] = true;
                deq.pb(adj);
                dist[adj.first] = dist[curr.first] + adj.second;
            }
        }
        if (deq.size()==0) {
            longest=*max_element(dist.begin(), dist.end());
        }
    }
}

// bfs function for diameter
void bfs2(int node)
{
    memset(visited, 0, sizeof(visited));
    visited[node]=true;
    dist[node]=0;
    deque<pii> deq;
    int lvl=0;
    deq.pb({node, 0});
    while (!deq.empty()) {
        pii curr=deq.front();
        deq.pop_front();
        lvl+=curr.second;
        for (pii adj : graph[curr.first]) {
            if (!visited[adj.first]) {
                visited[adj.first] = true;
                deq.pb(adj);
                dist[adj.first] = dist[curr.first] + adj.second;
                pre[adj.first]=curr.first;
            }
        }
        if (deq.size()==0) {
            longest=*max_element(dist.begin(), dist.end());
            auto nn2=find(dist.begin(), dist.end(), longest);
            int next_node2=distance(dist.begin(), nn2);
            node_needed=next_node2;
        }
    }
}

// driver code
bit32 main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read vertice count
    cin >> N;
    // read edges & set up graph
    for (int i=0; i<N-1; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});
    }
    // find first diameter endpoint
    bfs(1);
    // get next node as integer
    auto nn=find(dist.begin(), dist.end(), longest);
    int next_node=nn-dist.begin();
    // find second diameter endpoint
    bfs2(next_node);
    // output tree diameter
    cout << longest << "\n";
    // prepare to compute radius
    int curr=node_needed;
    while (true) {
        if (curr==next_node) break;
        else diameter_nodes.insert(pre[curr]);
        curr=pre[curr];
    }
    int first_endpoint=next_node; // in sample input, this is 4
    int second_endpoint=node_needed; // and this is 5
    // get distances of everything from the endpoints
    map<int, int> distance_first;
    bfs(first_endpoint);
    for (int s : diameter_nodes) {
        distance_first[s]=dist[s];
    }
    map<int, int> distance_second;
    bfs(second_endpoint);
    for (int s : diameter_nodes) {
        distance_second[s]=dist[s];
    }
    // finally compute the radius
    set<int> distances;
    for (int s : diameter_nodes) {
        distances.insert(max(distance_first[s], distance_second[s]));
    }
  // output the tree's radius
    cout << *min_element(distances.begin(), distances.end());
}
