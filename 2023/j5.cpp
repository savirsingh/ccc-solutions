// code by savir singh
// 6/15

#include <bits/stdc++.h>

using namespace std;

const int MAX = 105;

int R, C;
char grid[MAX][MAX];
string word;
int count1;

void dfs(int r, int c, int index, int dr, int dc) {
    if (index == word.size()) {
        count1++;
        return;
    }
    if (r < 0 || r >= R || c < 0 || c >= C || grid[r][c] != word[index]) {
        return;
    }
    dfs(r+dr, c+dc, index+1, dr, dc);
}

int main() {
    cin >> word;
    cin >> R >> C;
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            cin >> grid[r][c];
        }
    }
    count1 = 0;
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            dfs(r, c, 0, 1, 0);   // horizontal (left to right)
            dfs(r, c, 0, -1, 0);  // horizontal (right to left)
            dfs(r, c, 0, 0, 1);   // vertical (top to bottom)
            dfs(r, c, 0, 0, -1);  // vertical (bottom to top)
            dfs(r, c, 0, 1, 1);   // diagonal (top-left to bottom-right)
            dfs(r, c, 0, -1, -1); // diagonal (bottom-right to top-left)
            dfs(r, c, 0, 1, -1);  // diagonal (bottom-left to top-right)
            dfs(r, c, 0, -1, 1);  // diagonal (top-right to bottom-left)
        }
    }
    cout << count1 << endl;
}
