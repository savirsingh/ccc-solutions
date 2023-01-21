// code by savir singh
// one of the most time-consuming problems
// i have ever tried!

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

const int MAX=32;
int w, h, cw, ch, steps;
bool grid[MAX][MAX];
pair<int, int> coor;
string dir="right";
// ==true : you can visit
// ==false : obstruction

bool stuck() {
    int pos=0;
    if (!grid[coor.first+1][coor.second]) pos++;
    if (!grid[coor.first-1][coor.second]) pos++;
    if (!grid[coor.first][coor.second+1]) pos++;
    if (!grid[coor.first][coor.second-1]) pos++;
    return pos==4;
}

void markObstructions() {
    // obstruction square 1
    for (int i=1; i<=cw; i++) {
        for (int j=1; j<=ch; j++) {
            grid[i][j]=false;
        }
    }
    // obstruction square 2
    for (int i=w-cw+1; i<=w; i++) {
        for (int j=1; j<=ch; j++) {
            grid[i][j]=false;
        }
    }
    // obstruction square 3
    for (int i=1; i<=cw; i++) {
        for (int j=h-ch+1; j<=h; j++) {
            grid[i][j]=false;
        }
    }
    // obstruction square 2
    for (int i=w-cw+1; i<=w; i++) {
        for (int j=h-ch+1; j<=h; j++) {
            grid[i][j]=false;
        }
    }
}

void updateDir() {
    // manage "bumps"
    if (dir=="right" && (!grid[coor.first+1][coor.second] || coor.first+1>w)) dir="down";
    else if (dir=="down" && (!grid[coor.first][coor.second+1] || coor.second+1>h)) dir="left";
    else if (dir=="up" && (!grid[coor.first][coor.second-1] || coor.second-1<=0)) dir="right";
    else if (dir=="left" && (!grid[coor.first-1][coor.second] || coor.first-1<=0)) dir="up";
    // manage "twists"
    else if (dir=="down" && !grid[coor.first+1][coor.second-1] && grid[coor.first+1][coor.second]) dir="right";
    else if (dir=="left" && !grid[coor.first+1][coor.second+1] && grid[coor.first][coor.second+1]) dir="down";
    else if (dir=="up" && !grid[coor.first-1][coor.second+1] && grid[coor.first-1][coor.second]) dir="left";
    else if (dir=="right" && !grid[coor.first-1][coor.second-1] && grid[coor.first][coor.second-1]) dir="up";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(grid, true, sizeof(grid));
    scan(w); scan(h); scan(cw); scan(ch); scan(steps);
    // mark obstruction squares
    markObstructions();
    // current coors
    coor={cw+1, 1};
    // simulate
    //for (int i=1; i<=h; i++) {
        //for (int j=1; j<=w; j++) {
            //cout << grid[j][i];
        //}
        //cout << endl;
    //}
    if (2*cw==w-1) {
        // start facing down if only one
        // available column.
        dir="down";
    }
    while (steps--) {
        if (stuck()) {
            cout << coor.first << endl << coor.second << endl;
            return false;
        }
        //cout << coor.first << " " << coor.second << endl;
        grid[coor.first][coor.second]=false;
        if (dir=="right") coor.first++;
        else if (dir=="left") coor.first--;
        else if (dir=="up") coor.second--;
        else if (dir=="down") coor.second++;
        updateDir();
    }
    cout << coor.first << endl << coor.second << endl;
}
