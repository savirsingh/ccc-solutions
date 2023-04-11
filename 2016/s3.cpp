// code by savir singh
// 15/15 on DMOJ & CCC Grader

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) (int) (a).size()
#define rsz resize
#define pii pair<int, int>
#define eb emplace_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)
#define fr(i,x,n) for(int i=x;i>n;i--)
#define fre(i,x,n) for(int i=x;i>=n;i--)
#define mod 1000000007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MM = 1e5 + 1;
int n, m, re, longest = 0, node_needed;
vector<int> dist(MM, 0);
vector<int> adj[MM];
map<int, int> pre;
bool pho[MM], visited[MM];

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

void dfs(int node, int prev) {
    for (int nxt : adj[node]) {
        if (nxt == prev) continue;
        dfs(nxt, node);
        if (pho[nxt]) pho[node] = true;
    }
}

// bfs function
void bfs(int node) {
    memset(visited, 0, sizeof(visited));
    visited[node]=true;
    dist[node]=0;
    deque<int> deq;
    deq.pb(node);
    while (!deq.empty()) {
        int cur = deq.front();
        deq.pop_front();
        for (int nxt : adj[cur]) {
            if (!visited[nxt] && pho[nxt]) {
                visited[nxt] = true;
                deq.pb(nxt);
                dist[nxt] = dist[cur] + 1;
            }
        }
        if (deq.size()==0) {
            longest=*max_element(dist.begin(), dist.end());
        }
    }
}

// bfs function for diameter
void bfs2(int node) {
    memset(visited, 0, sizeof(visited));
    visited[node]=true;
    dist[node]=0;
    deque<int> deq;
    deq.pb(node);
    while (!deq.empty()) {
        int cur = deq.front();
        deq.pop_front();
        for (int nxt : adj[cur]) {
            if (!visited[nxt] && pho[nxt]) {
                visited[nxt] = true;
                deq.pb(nxt);
                dist[nxt] = dist[cur] + 1;
                pre[nxt]=cur;
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

int32_t main() {
    __ cin >> n >> m;
    fe(i, 1, m) {
        cin >> re; re++; pho[re] = true;
    }
    fe(i, 1, n-1) {
        int x, y;
        cin >> x >> y;
        x++, y++;
        adj[x].pb(y), adj[y].pb(x);
    }
    dfs(re, -1);
    int numpho = 0;
    fe(i, 1, n) {
        if (pho[i]) numpho++;
    }
    // first endpoint
    bfs(re);
    auto nn = find(dist.begin(), dist.end(), longest);
    int next_node = nn - dist.begin();
    // second endpoint
    bfs2(next_node);
    // output diameter
    cout << (2 * (numpho - 1)) - longest << endl;
}
