// code by savir singh
// https://dmoj.ca/problem/nccc1j4s2
// 15/15

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

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

// all vars
const int MAX=48;
int N;
int arr[MAX][MAX];

// driver code
bit32 main() {
    // read N and the array
    int N; read(N);
    for (int i=0; i<N; i++) {
        str line; cin >> line;
        for (int j=0; j<N; j++) {
            if (isdigit(line[j])) arr[i][j]=(int)line[j]-48;
            else arr[i][j]=(int)line[j]-55;
        }
    }
    // ds needed for rows/cols
    map<int, vector<int>> cols, rows;
    for (int i=0; i<N; i++) { // look for second val i
        for (int j=0; j<N; j++) {
            cols[i].pb(arr[j][i]);
        }
    } // cols done!
    // get rows
    for (int i=0; i<N; i++) {
        vector<int> row;
        for (int j=0; j<N; j++) {
            row.pb(arr[i][j]);
        }
        rows[i]=row;
    } // rows done!
    // check if NOT latin square
    for (int i=0; i<N; i++) { // rows first
        vector<int> curr=rows[i];
        set<int> curr_set(curr.begin(), curr.end());
        // if duplicates:
        if (curr_set.size()!=N) {
            cout << "No\n"; return false;
        }
        vector<int> curr_=cols[i]; // cols next
        set<int> curr_set_(curr_.begin(), curr_.end());
        // if duplicates:
        if (curr_set_.size()!=N) {
            cout << "No\n"; return false;
        } // now we know if it's a latin square
    }
    // check if reduced
    vector<int> first_row=rows[0], first_col=cols[0];
    vector<int> sorted_row=first_row, sorted_col=first_col;
    sort(sorted_row.begin(), sorted_row.end());
    sort(sorted_col.begin(), sorted_col.end());
    if (first_row==sorted_row || first_col==sorted_col) {
        cout << "Reduced\n";
        return false;
    }
    // finally!
    cout << "Latin\n";
}
