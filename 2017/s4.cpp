// code by savir singh
// 15/15 on CCC Grader, 17/17 on DMOJ
// MST

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
#define int long long
char _;
using namespace std;

const int MAX=1e5+2;
int n, m, d, fin, parent[MAX], parent2[MAX];

struct edge {
    int u;
    int v;
    int w;
    int time;
};

bool compare(edge &a, edge &b) {
    if (a.w == b.w) return a.time < b.time;
    return a.w < b.w;
}

vector<edge> edges;
edge best;

int find_set(int node) {
    if (parent[node]!=node) {
        parent[node]=find_set(parent[node]);
    }
    return parent[node];
}

bool same(int a, int b) {
    return find_set(a)==find_set(b);
}

void union_set(int a, int b) {
    int u=find_set(a);
    int v=find_set(b);
    parent[u]=v;
}

int find_set2(int node) {
    if (parent2[node]!=node) {
        parent2[node]=find_set2(parent2[node]);
    }
    return parent2[node];
}

bool same2(int a, int b) {
    return find_set2(a)==find_set2(b);
}

void union_set2(int a, int b) {
    int u=find_set2(a);
    int v=find_set2(b);
    parent2[u]=v;
}

edge edgeMax(edge &a, edge &b) {
    if (a.w < b.w) {
        return b;
    }
    return a;
}

int kruskal() {
    best.u=-1; best.v=-1; best.w=-1;
    int days=0;
    for (edge ed : edges) {
        if (!same(ed.u, ed.v)) {
            if (ed.time >= n) days++;
            best=edgeMax(best, ed);
            union_set(ed.u, ed.v);
        }
    }
    return days;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scan(n); scan(m); scan(d);
    for (int i=1; i<=n; i++) {
        parent[i]=i;
        parent2[i]=i;
    }
    for (int i=1; i<=m; i++) {
        int u, v, w;
        scan(u); scan(v); scan(w);
        edges.push_back({u, v, w, i});
    }
    sort(edges.begin(), edges.end(), compare);
    fin = kruskal();
    if (best.w < d) {
        for (edge ed : edges) {
            if (!same2(ed.u, ed.v)) {
                if (ed.w < best.w || (ed.w == best.w && ed.time < n)) {
                    union_set2(ed.u, ed.v);
                }
                else if (ed.time < n && ed.w <= d) {
                    fin--; break;
                }
            }
        }
    }
    cout << fin << endl;
}
