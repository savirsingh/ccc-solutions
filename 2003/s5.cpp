// code by savir singh
// and ladies and gentlemen,
// this is maximum spanning tree!

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

const int MAX=10008;
int c, r, d, parent[MAX];
bool destination[MAX];

struct edge {
    int u;
    int v;
    int w;
};

bool desc(edge &a, edge &b) {
    return a.w > b.w;
}

vector<edge> edges;

int find_set(int node) {
    if (parent[node]!=node) {
        parent[node]=find_set(parent[node]);
    }
    return parent[node];
}

bool same(int a, int b) {
    return find_set(a)==find_set(b);
}

bool root(int a, int b) {
    if (find_set(a)==find_set(b)) return true;
    return false;
}

void union_set(int a, int b) {
    int u=find_set(a);
    int v=find_set(b);
    parent[u]=v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scan(c); scan(r); scan(d);
    for (int i=1; i<=c; i++) parent[i]=i;
    for (int i=0; i<r; i++) {
        int u, v, w;
        scan(u); scan(v); scan(w);
        edges.push_back({u, v, w});
    }
    sort(edges.begin(), edges.end(), desc);
    for (int i=0; i<d; i++) {
        int di; scan(di);
        destination[di]=true;
    }
    int cnt=0;
    for (edge &e : edges) {
        if (!same(e.u, e.v)) {
            if (destination[e.u]) {
                destination[e.u]=false;
                cnt++;
            }
            if (destination[e.v]) {
                destination[e.v]=false;
                cnt++;
            }
            if (cnt==d) {
                cout << e.w << endl;
                return false;
            }
            union_set(e.u, e.v);
        }
    }
    cout << 0 << endl;
}
