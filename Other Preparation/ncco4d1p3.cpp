// code by savir singh
// https://dmoj.ca/problem/ncco4d1p3
// 100/100

#include <bits/stdc++.h>
using namespace std;

#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INF 1e9

const int MAXN = 1e5 + 5;
char outbuf[4 * MAXN]; // Output buffer
int outpos = 0;

void putchar_fast(char c) {
    outbuf[outpos++] = c;
    if (outpos == sizeof(outbuf)) {
        fwrite(outbuf, 1, outpos, stdout);
        outpos = 0;
    }
}

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

// Flush the output buffer
void flush() {
    fwrite(outbuf, 1, outpos, stdout);
    outpos = 0;
}

// Fast Output For Integers
inline void fastprint(int num, const string& endline = "\n") {
    if (num < 0) {
        putchar_fast('-');
        num = -num;
    }
    int idx = 19;
    outbuf[idx--] = '\0';

    do {
        outbuf[idx--] = static_cast<char>('0' + num % 10);
        num /= 10;
    } while (num > 0);

    idx++;
    while (outbuf[idx] != '\0') {
        putchar_fast(outbuf[idx]);
        idx++;
    }

    for (char c : endline) {
        putchar_fast(c);
    }
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
    for (char c : s) {
        putchar_fast(c);
    }

    for (char c : endline) {
        putchar_fast(c);
    }
}

inline int dijkstra(const vector<vector<pair<int, int>>>& graph, int start, int end) {
    int n = graph.size();
    vector<int> dist(n, INF);
    vector<int> dist2(n, INF); //to store the second shortest distance

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist2[u]) continue; //skip if this is not the second shortest distance

        for (auto [v, w] : graph[u]) {
            int new_dist = d + w;

            if (new_dist < dist[v]) {
                swap(new_dist, dist[v]);
                pq.push({dist[v], v});
            }

            if (new_dist < dist2[v] && new_dist > dist[v]) {
                dist2[v] = new_dist;
                pq.push({dist2[v], v});
            }
        }
    }

    return dist2[end];
}

int main() {
    __

    int n, m;
    fastscan(n, m);

    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < m; i++) {
        int a, b, w;
        fastscan(a, b, w);
        a--; //convert to 0-based indexing
        b--;
        graph[a].emplace_back(b, w);
        graph[b].emplace_back(a, w);
    }

    int second_shortest_path = dijkstra(graph, 0, n - 1);
    fastprint(second_shortest_path);

    flush(); // Flush the output buffer
    return 0;
}
