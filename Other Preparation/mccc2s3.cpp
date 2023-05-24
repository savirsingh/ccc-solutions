// code by savir singh
// https://dmoj.ca/problem/mccc2s3
// 15/15

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

const int MM = 5e4 + 1;
int n, m, q, parent[1<<7][MM];

int find_set(int node, int x) {
    if (parent[x][node]!=node) {
        parent[x][node]=find_set(parent[x][node], x);
    }
    return parent[x][node];
}

void union_set(int a, int b, int x) {
    int u=find_set(a, x);
    int v=find_set(b, x);
    parent[x][u]=v;
}

int32_t main() {
    scan(n);scan(m);scan(q);
    for (int i = 0; i < (1<<7); i++) iota(parent[i], parent[i] + MM, 0);
    for (int i = 0; i < m; i++) {
        int u, v, k; scan(u);scan(v);scan(k);
        for (int j = 0; j < (1<<7); j++) {
            if ((k | j) == j) union_set(u, v, j);
        }
    }
    for (int i = 0; i < q ;i++) {
        int a;int b;scan(a); scan(b);
        for (int j = 0; j < (1<<7); j++) {
            if (find_set(a, j) == find_set(b, j)) {cout << j << endl; break;}
        }
    }
}
