// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int n, q;
char grid[28][28];
bool visited[28][28];
bool found=false;

void dfs(int x, int y, int index, string word) {
    if (index==word.size()) found=true;
    if (found) return;
    visited[x][y]=true;
    vector<pair<int, int>> adj;
    if (grid[x-1][y-1]==word[index]) adj.push_back({x-1, y-1});
    if (grid[x-1][y]==word[index]) adj.push_back({x-1, y});
    if (grid[x-1][y+1]==word[index]) adj.push_back({x-1, y+1});
    if (grid[x][y-1]==word[index]) adj.push_back({x, y-1});
    if (grid[x][y+1]==word[index]) adj.push_back({x, y+1});
    if (grid[x+1][y-1]==word[index]) adj.push_back({x+1, y-1});
    if (grid[x+1][y]==word[index]) adj.push_back({x+1, y});
    if (grid[x+1][y+1]==word[index]) adj.push_back({x+1, y+1});
    for (auto x : adj) {
        if (!visited[x.first][x.second]) dfs(x.first, x.second, index+1, word);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i=0; i<q; i++) {
        found=false;
        set<pair<int, int>> used;
        string word; cin >> word;
        for (int j=1; j<=n; j++) {
            for (int k=1; k<=n; k++) {
                memset(visited, 0, sizeof(visited));
                if (grid[j][k]==word[0] && used.find({j, k})==used.end()) {
                    dfs(j, k, 1, word);
                    used.insert({j, k});
                    if (found) {
                        cout << "good puzzle!" << endl;
                        break;
                    }
                }
            }
            if(found) break;
        }
        if (!found) cout << "bad puzzle!" << endl;
    }
}
