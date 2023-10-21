// code by savir singh
// https://dmoj.ca/problem/btoi03p4
// 100/100

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

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

const int mm = 1001;
int N, M, parent[mm], rnk[mm];
set<int> enemies[mm];

inline int find_(int u) {
        if (parent[u] == u)
                return u;
        return find_(parent[u]);
}

inline void merge_(int u, int v) {
        u = find_(u), v = find_(v);
        if (rnk[u] < rnk[v]) {
                parent[u] = v;
        }
        else if (rnk[v] < rnk[u])
                parent[v] = u;
        else {
                parent[u] = v;
                rnk[v]++;
        }
}

inline bool same(int u, int v) {
        return find_(u) == find_(v);
}

// simple idea //
// make friend of friends also friend
// make enemies of enemies friend
// make friends obv friends
// find num of components, and done.

int32_t main() {
        boost();
        cin >> N >> M;
        for (int i = 1; i <= N; i++) {
                parent[i] = i;
                rnk[i] = 1;
        }
        for (;M--;) {
                char o; int p, q;
                cin >> o >> p >> q;
                if (o == 'F') {
                        merge_(p, q);
                }
                else {
                        enemies[p].insert(q);
                        enemies[q].insert(p);
                }
        }
        for (int i = 1; i <= N; i++) {
                //make enemies of enemies == friends
                for (int j : enemies[i]) {
                        for (int k : enemies[j]) {
                                merge_(i, k);
                        }
                }
        }
        int ans = 0;
        for (int i = 1; i <= N; i++) {
                if (parent[i] == i)
                        ++ans;
        }
        fastprint(ans);

        return 0;
}
