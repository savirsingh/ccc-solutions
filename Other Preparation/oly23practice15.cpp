#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int MM = 1001;
int r, c, graph[MM][MM];

// flood fill algorithm
void count_islands(int i, int j)
{
    graph[i][j]=-1; // mark visited
    if (i < r && graph[i + 1][j] > 0) count_islands(i + 1, j);
    if (i > 1 && graph[i - 1][j] > 0) count_islands(i - 1, j);
    if (j > 1 && graph[i][j - 1] > 0) count_islands(i, j - 1);
    if (j < c && graph[i][j + 1] > 0) count_islands(i, j + 1);
    if (i < r && j < c && graph[i+1][j+1] > 0) count_islands(i + 1, j + 1);
    if (i > 1 && j > 1 && graph[i-1][j-1] > 0) count_islands(i - 1, j - 1);
    if (i < r && j > 1 && graph[i+1][j-1] > 0) count_islands(i + 1, j - 1);
    if (i > 1 && j < c && graph[i-1][j+1] > 0) count_islands(i - 1, j + 1);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin >> r >> c;
    for (int i = 1; i <= r; ++i) {
        for (int j =1; j <= c; ++ j) {
            cin >> graph[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= r; ++i) {
        for (int j =1; j <= c; ++ j) {
            if (graph[i][j] > 0) {
                count_islands(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;
}