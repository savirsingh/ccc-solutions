// code by savir singh
// 15/15

// most difficult implementation construction problem ever
// there are so many edge cases

// the basic idea is simply to set everything to 'a' and
// then changing things to 'b' to reduce the number of
// palindromes. Afterwards you can add special conditions
// for the edge cases to handle them. The main edge cases
// were when R=N/C=M and the other one isn't equal to N/M.

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 2007;
int n, m, r, c;
char grid[MAX][MAX];

bool isPalindrome(string str) {
    int n = str.length();
    for (int i=0; i<n/2; i++) {
        if (str[i] != str[n-i-1]) {
            return false;
        }
    }
    return true;
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> r >> c;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            grid[i][j] = 'a';
        }
    }
    if (r == 0 && c == 0 && n == 2 && m == 2) {
        cout << "ab\nba\n";
        return false;
    }
    if (r == 0 && c == 0 && n == 1 && m == 1) {
        cout << "IMPOSSIBLE\n";
        return false;
    }
    // special case
    if (r == n && c != m && m%2 == 1) {
        // c is even
        if (c%2 == 0) {
            int start = c/2 + 1;
            int en = c/2 + 1 + m - c - 1;
            for (int i = 2; i<=n; i++) {
                for (int j = start; j <= en; j++) {
                    grid[i][j] = 'b';
                }
            }
        }
        // c is odd
        else {
            for (int i=2; i<=n; i++) {
                int start = 1;
                int total = 0;
                int adder = m-1;
                while (total < m - c) {
                    grid[i][start] = 'b';
                    grid[i][start+adder] = 'b';
                    total += 2;
                    adder -= 2;
                    start++;
                }
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return false;
    }
    // for columns
    if (c == m && r != n && n%2 == 1 && r != 0) {
        // r is even
        if (r%2 == 0) {
            int start = r/2 + 1;
            int en = r/2 + 1 + n - r - 1;
            for (int i = 2; i<=m; i++) {
                for (int j = start; j <= en; j++) {
                    grid[j][i] = 'b';
                }
            }
        }
        // r is odd
        else {
            for (int i=2; i<=m; i++) {
                grid[1][i] = 'b';
                grid[n][i] = 'b';
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return false;
    }
    // other special case
    if (r == n && c != m && m%2==0) {
        // not possible if c is odd
        if (c%2 == 1) {
            cout << "IMPOSSIBLE\n";
            return false;
        }
        else {
            for (int i=2; i<=n; i++) {
                int start = 1;
                int total = 0;
                int adder = m-1;
                while (total < m - c) {
                    grid[i][start] = 'b';
                    grid[i][start+adder] = 'b';
                    total += 2;
                    adder -= 2;
                    start++;
                }
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return false;
    }
    // for columns
    if (c == m && r != n && n%2==0 && r != 0) {
        // not possible if r is odd
        if (r%2 == 1) {
            cout << "IMPOSSIBLE\n";
            return false;
        }
        else {
            for (int i=(r+2)/2; i<=n - (r+2)/2 + 1; i++) {
                int start = 2;
                int total = 0;
                int adder = n-1;
                while (total < n - r) {
                    grid[i][start] = 'b';
                    grid[i][start+adder] = 'b';
                    total += 2;
                    adder -= 2;
                    start++;
                }
            }
        }
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        return false;
    }
    for (int i=r+1; i<=n; i++) {
        grid[i][m] = 'c';
    }
    for (int i=c+1; i<=m; i++) {
        if (grid[n][i] == 'c') grid[n][i] = 'd';
        else grid[n][i] = 'b';
    }
    // check row palindromes
    int rp = 0;
    for (int i=1; i<=n; i++) {
        string abc;
        for (int j=1; j<=m; j++) {
            abc += grid[i][j];
        }
        if (isPalindrome(abc)) rp++;
    }
    // check column palindromes
    int cp = 0;
    for (int i=1; i<=m; i++) {
        string abc;
        for (int j=1; j<=n; j++) {
            abc += grid[j][i];
        }
        if (isPalindrome(abc)) cp++;
    }
    if (rp == r && cp == c) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    }
    else cout << "IMPOSSIBLE\n";
}
