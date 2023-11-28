// code by savir singh
// maxflow problem.
// ford fulkerson w/ bfs
// 100/100 on dmoj.

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define pb push_back
#define INF 1e18

const int mm = 19;
int cap[mm][mm], s = 1, t = 18, bt[mm];
bool vis[mm];
vector<int> adj[mm];

inline bool bfs() {
    memset(vis, false, sizeof vis);
    deque<int> deq;
    vis[s] = 1;
    deq.pb(s);
    bt[s] = INF;
    while (!deq.empty()) {
        int cur = deq.front();
        deq.pop_front();
        if (cur == t) return true;
        for (int nxt : adj[cur]) {
            if (vis[nxt] || !cap[cur][nxt]) continue;
            vis[nxt] = true;
            bt[nxt] = cur;
            deq.pb(nxt);
        }
    }
    return false;
}

inline void addEdge(int x, int y, int w) {
    adj[x].pb(y);
    adj[y].pb(x);
    cap[x][y]=w;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //memset(vis, false, sizeof vis);
    for (int i = 2; i <= 9; i++) {
        int u; cin >> u;
        addEdge(s, i, u);
    }
    for (int i = 10; i <= 17; i++) {
        int p; cin >> p;
        addEdge(i, t, p);
    }
    //now we will make edges from past ones
    //check rough graph for more info,
    //im too lazy to explain
    //https://ibb.co/R0QZSgD

    //O- can accept:
    addEdge(2, 10, INF);

    //O+ can accept:
    addEdge(2, 11, INF);
    addEdge(3, 11, INF);

    //A- can accept:
    addEdge(2, 12, INF);
    addEdge(4, 12, INF);

    //A+ can accept:
    addEdge(2, 13, INF);
    addEdge(3, 13, INF);
    addEdge(4, 13, INF);
    addEdge(5, 13, INF);

    //B- can accept:
    addEdge(2, 14, INF);
    addEdge(6, 14, INF);

    //B+ can accept:
    addEdge(2, 15, INF);
    addEdge(3, 15, INF);
    addEdge(6, 15, INF);
    addEdge(7, 15, INF);

    //AB- can accept:
    addEdge(2, 16, INF);
    addEdge(4, 16, INF);
    addEdge(6, 16, INF);
    addEdge(8, 16, INF);

    //AB+ can accept:
    addEdge(2, 17, INF);
    addEdge(3, 17, INF);
    addEdge(4, 17, INF);
    addEdge(5, 17, INF);
    addEdge(6, 17, INF);
    addEdge(7, 17, INF);
    addEdge(8, 17, INF);
    addEdge(9, 17, INF);

    int ans = 0;
    while (bfs()) {
        int bottleneck = INF;

        //find the bottleneck capacity in the augmenting path
        for (int cur = t; cur != s; cur = bt[cur]) {
            int prev = bt[cur];
            bottleneck = min(bottleneck, cap[prev][cur]);
        }

        //update the residual capacities and reverse edges
        for (int cur = t; cur != s; cur = bt[cur]) {
            int prev = bt[cur];
            cap[prev][cur] -= bottleneck;
            cap[cur][prev] += bottleneck;
        }

        ans += bottleneck;
    }

    cout << ans << endl;


    return 0;
}
