#include <iostream>
using namespace std;

const int MM = 1e4 + 2;
int n, m;
bool grid[MM][MM];

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

int main() {
    read(n);read(m);
    for (int i = 1; i <= m; i++) {
        int x, y, w, h;
        read(x);read(y);read(w);read(h);x++;y++;
        grid[x][y] ^= 1;
        grid[x+w][y] ^= 1;
        grid[x][y+h] ^= 1;
        grid[x+w][y+h] ^= 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            grid[i][j] ^= grid[i - 1][j] ^ grid[i][j-1] ^ grid[i-1][j-1];
            ans += grid[i][j];
        }
    }
    cout << ans << endl;
}