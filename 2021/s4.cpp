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

// all vars
const int MAX=200002;
int N, W, D;
int walkway_dist[MAX];
bool walkway_vis[MAX];
vector<int> walkway_graph[MAX];
multiset<int> res;

// bfs function
void bfs(int start)
{
    for (int i=1; i<=N; i++) {
        walkway_dist[i]=INT_MAX;
    }
    walkway_dist[start]=0;
    walkway_vis[start]=true;
    deque<int> deq;
    deq.pb(start);
    while(!deq.empty()) {
        int curr=deq.front();
        deq.pop_front();
        int lvl=walkway_dist[curr];
        for (int adj : walkway_graph[curr]) {
            if (!walkway_vis[adj]) {
                walkway_vis[adj]=true;
                walkway_dist[adj]=lvl+1;
                deq.pb(adj);
            }
        }
    }
}

// driver code
bit32 main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read main input and initialize stuff
    cin >> N >> W >> D;
    int perm[N+1];
    // read the walkway
    for (int i=0; i<W; i++) {
        int A, B; cin >> A >> B;
        walkway_graph[B].pb(A);
    }
    // compute the walkway distances from N
    bfs(N);
    // read inital permutation
    for (int i=1; i<=N; i++) {
        cin >> perm[i];
        res.insert(i+walkway_dist[perm[i]]-1);
    }
    // simulate the rest:
    for (int i=0; i<D; i++) {
        int X, Y; cin >> X >> Y;
        int curr_val_X=X+walkway_dist[perm[X]]-1;
        int curr_val_Y=Y+walkway_dist[perm[Y]]-1;
        res.del(res.find(curr_val_X));
        res.del(res.find(curr_val_Y));
        // swap new values & add to multiset
        int permy=perm[Y];
        int permx=perm[X];
        perm[X]=permy; perm[Y]=permx;
        res.insert(X+walkway_dist[perm[X]]-1);
        res.insert(Y+walkway_dist[perm[Y]]-1);
        // get smallest value & output from multiset
        int min_dist=*res.begin();
        cout << min_dist << "\n";
    }
}
