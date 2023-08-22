// code by savir singh
// https://dmoj.ca/problem/dmopc16c4p5
// 100/100

// Include everything needed for CP
#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
#define int long long // comment out if unnecessary
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
#define w(x) int x; fastscan(x); while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// Fast Input
template<typename T, typename... Args>
inline void fastscan(T& num, Args&... args) {
        int c = getchar();
        num = 0;
        bool neg = false;

        // Handle negative numbers
        if (c == '-') {
                neg = true;
                c = getchar();
        }

        // Process digits
        while (c >= '0' && c <= '9') {
                num = num * 10 + (c - '0');
                c = getchar();
        }

        if (neg)
                num = -num;

        if constexpr (sizeof...(args) > 0)
                fastscan(args...); // Recursively read the remaining arguments
}

// Fast Output For Integers
inline void fastprint(int num, const string& endline = "\n") {
        if (num < 0) {
                putchar('-');
                num = -num;
        }
        char buffer[20];
        int idx = 19;
        buffer[idx--] = '\0';

        do {
                buffer[idx--] = static_cast<char>('0' + num % 10);
                num /= 10;
        }while (num > 0);

        fputs(&buffer[idx + 1], stdout);
        fputs(endline.c_str(), stdout);
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
        fputs(s.c_str(), stdout);
        fputs(endline.c_str(), stdout);
}

// == your template ends here, start coding!!! ==

//vars
const int mm = 2e5 + 1;
int n, m, a, b, p, dist[mm], par[mm];
//bool vis[mm];
vvpii adj(mm);

struct edge {
        int u, v, w;
};

inline bool desc(edge &a, edge &b) {
        return a.w > b.w;
}

vector<edge> edges;
//vector<edge> mst;

inline int find_set(int node) {
        if (par[node] != node)
                par[node] = find_set(par[node]);
        return par[node];
}

inline bool same(int a, int b) {
        return find_set(a) == find_set(b);
}

inline bool root(int a, int b) {
        if (same(a, b))
                return true;
        return false;
}

inline void union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);
        par[a] = b;
}

inline void dfs(int node, int prev) {
        for (auto u : adj[node]) {
                if (u.first == prev) continue;
                dist[u.first] = min(dist[node], u.second);
                dfs(u.first, node);
        }
}

bit32 main() {
        __
        fastscan(n, m);
        fe(i, 1, m) {
                fastscan(a, b, p);
                edges.pb({a, b, p});
        }
        sort(all(edges), desc);
        fe(i, 1, n)
                par[i] = i;
        for (edge &e : edges) {
                if (!same(e.u, e.v)) {
                        union_set(e.u, e.v);
//                        mst.eb(e);
                        adj[e.u].eb(e.v, e.w);
                        adj[e.v].eb(e.u, e.w);
                }
        }
        dist[1] = INF;
        dfs(1, 0);
        fastprint(0);
        fe(i, 2, n) {
                fastprint(dist[i]);
        }

        return 0;
}
