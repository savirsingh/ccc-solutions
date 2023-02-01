// code by savir singh
// very annoying problem
// but also super fun

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

const int MAX=108;
int n, m;
pii start;
char grid[MAX][MAX];
int dist[MAX][MAX];
bool vis[MAX][MAX];
vector<pii> cameras;
vector<pii> queries;

void cameraSpread() {
    for (auto camera : cameras) {
        for (int i=camera.first; i>=1; i--) {
            if (grid[i][camera.second]=='W') break;
            if (grid[i][camera.second] == '.') {
                dist[i][camera.second] = -10;
                vis[i][camera.second] = true;
            }
        }
        for (int i=camera.first; i<=n; i++) {
            if (grid[i][camera.second]=='W') break;
            if (grid[i][camera.second] == '.' || grid[i][camera.second] == 'S') {
                dist[i][camera.second] = -10;
                vis[i][camera.second] = true;
            }
        }
        for (int i=camera.second; i>=1; i--) {
            if (grid[camera.first][i]=='W') break;
            if (grid[camera.first][i] == '.' || grid[camera.first][i] == 'S') {
                dist[camera.first][i] = -10;
                vis[camera.first][i] = true;
            }
        }
        for (int i=camera.second; i<=m; i++) {
            if (grid[camera.first][i]=='W') break;
            if (grid[camera.first][i] == '.' || grid[camera.first][i] == 'S') {
                dist[camera.first][i] = -10;
                vis[camera.first][i] = true;
            }
        }
    }
}

void bfs(pii pos) {
    deque<pii> deq;
    deq.push_back(pos);
    while (!deq.empty()) {
        pii cur = deq.front();
        deq.pop_front();
        // check vis
        if (vis[cur.first][cur.second]) continue;
        // wall/same cell as camera
        if (grid[cur.first][cur.second] == 'W' || grid[cur.first][cur.second] == 'C') {
            continue;
        }
        // starting or empty block
        if (grid[cur.first][cur.second] == 'S' || grid[cur.first][cur.second] == '.') {
            if (dist[cur.first][cur.second-1] > dist[cur.first][cur.second]+1 && cur.second!=1) {
                dist[cur.first][cur.second-1] = dist[cur.first][cur.second]+1;
                deq.emplace_back(cur.first, cur.second-1);
            }
            if (dist[cur.first][cur.second+1] > dist[cur.first][cur.second]+1 && cur.second!=m) {
                dist[cur.first][cur.second+1] = dist[cur.first][cur.second]+1;
                deq.emplace_back(cur.first, cur.second+1);
            }
            if (dist[cur.first-1][cur.second] > dist[cur.first][cur.second]+1 && cur.first!=1) {
                dist[cur.first-1][cur.second] = dist[cur.first][cur.second]+1;
                deq.emplace_back(cur.first-1, cur.second);
            }
            if (dist[cur.first+1][cur.second] > dist[cur.first][cur.second]+1 && cur.first!=n) {
                dist[cur.first+1][cur.second] = dist[cur.first][cur.second]+1;
                deq.emplace_back(cur.first+1, cur.second);
            }
        }
        // left conveyor
        else if (grid[cur.first][cur.second] == 'L') {
            if (dist[cur.first][cur.second-1] > dist[cur.first][cur.second] && cur.second!=1 && grid[cur.first][cur.second-1]!='W') {
                dist[cur.first][cur.second-1] = dist[cur.first][cur.second];
                deq.emplace_back(cur.first, cur.second-1);
            }
        }
        // right conveyor
        else if (grid[cur.first][cur.second] == 'R') {
            if (dist[cur.first][cur.second+1] > dist[cur.first][cur.second] && cur.second!=m && grid[cur.first][cur.second+1]!='W') {
                dist[cur.first][cur.second+1] = dist[cur.first][cur.second];
                deq.emplace_back(cur.first, cur.second+1);
            }
        }
        // up conveyor
        else if (grid[cur.first][cur.second] == 'U') {
            if (dist[cur.first-1][cur.second] > dist[cur.first][cur.second] && cur.first!=1 && grid[cur.first-1][cur.second]!='W') {
                dist[cur.first-1][cur.second] = dist[cur.first][cur.second];
                deq.emplace_back(cur.first-1, cur.second);
            }
        }
        // down conveyor
        else if (grid[cur.first][cur.second] == 'D') {
            if (dist[cur.first+1][cur.second] > dist[cur.first][cur.second] && cur.first!=n && grid[cur.first+1][cur.second]!='W') {
                dist[cur.first+1][cur.second] = dist[cur.first][cur.second];
                deq.emplace_back(cur.first+1, cur.second);
            }
        }
    }
}

int32_t main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'S') start = {i, j};
            else if (grid[i][j] == '.') queries.emplace_back(i, j);
            else if (grid[i][j] == 'C') cameras.emplace_back(i, j);
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            dist[i][j] = 1e18;
        }
    }
    memset(vis, false, sizeof vis);
    cameraSpread();
    dist[start.first][start.second]=0;
    bfs(start);
    for (auto x : queries) {
        if (vis[x.first][x.second] || dist[x.first][x.second]>=1e18) cout << -1 << endl;
        else cout << dist[x.first][x.second] << endl;
    }
}
