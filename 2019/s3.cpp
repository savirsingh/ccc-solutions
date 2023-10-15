// code by savir singh
// 15/15 on CCC Grader, 16/16 on DMOJ
// very overcomplicated, but the majority of this code was written at midnight
// the basic idea is:
// it's really just casework. if the number of 'X' chars is less than 4, it's
// simple and the compute() function handles it. and then the casework comes in.
// just handle everything for the number of 'X' chars > 3 and pray.
// i did a lot of fast-slow to figure out some incorrect things
// also rubber duck debugging is great :D

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define int long long
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

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

const int mm = 4;
int a[mm][mm], xnt = 0;

inline void compute() {
        for (int i = 1; i <= 3; i++) {
                //row X _ X
                if (a[i][1] != 1e18 && a[i][2] == 1e18 && a[i][3] != 1e18)
                        a[i][2] = a[i][1] + ((a[i][3] - a[i][1]) / 2);
                //row X X _
                if (a[i][1] != 1e18 && a[i][2] != 1e18 && a[i][3] == 1e18)
                        a[i][3] = a[i][2] + (a[i][2] - a[i][1]);
                //row _ X X
                if (a[i][1] == 1e18 && a[i][2] != 1e18 && a[i][3] != 1e18)
                        a[i][1] = a[i][2] - (a[i][3] - a[i][2]);
        }
        for (int i = 1; i <= 3; i++) {
                //col X _ X
                if (a[1][i] != 1e18 && a[2][i] == 1e18 && a[3][i] != 1e18)
                        a[2][i] = a[1][i] + ((a[3][i] - a[1][i]) / 2);
                //col X X _
                if (a[1][i] != 1e18 && a[2][i] != 1e18 && a[3][i] == 1e18)
                        a[3][i] = a[2][i] + (a[2][i] - a[1][i]);
                //col _ X X
                if (a[1][i] == 1e18 && a[2][i] != 1e18 && a[3][i] != 1e18)
                        a[1][i] = a[2][i] - (a[3][i] - a[2][i]);
        }
}

int32_t main() {
        boost();
        for (int i = 1; i <= 3; i++) {
                for (int j = 1; j <= 3; j++) {
                        string x; cin >> x;
                        int amt = 1e18;
                        if (x != "X")
                                amt = stoi(x);
                        a[i][j] = amt;
                }
        }
        compute();
        compute();
        for (int i = 1; i <= 3; i++) {
                for (int j = 1; j <= 3; j++) {
                        int amt = a[i][j];
                        if (amt == 1e18)
                                ++xnt;
                }
        }
        //special cases
        if (xnt == 9) {
                cout << "8 9 10" << endl;
                cout << "16 18 20" << endl;
                cout << "24 27 30" << endl;
                return 0;
        }
        if (xnt == 8) {
                int val;
                for (int i = 1; i <= 3; i++) {
                        for (int j = 1; j <= 3; j++) {
                                if (a[i][j] != 1e18) {
                                        val = a[i][j];
                                }
                        }
                }
                for (int i = 1; i <= 3; i++) {
                        for (int j = 1; j <= 3; j++) {
                                cout << val << " ";
                        }
                        cout<<endl;
                }
                return 0;
        }
        if (xnt == 7) {
                int one1 = 1e18, two1, one2, two2;
                for (int i = 1; i <= 3; i++) {
                        for (int j = 1; j <= 3; j++) {
                                if (a[i][j] != 1e18) {
                                        if (one1 == 1e18) {
                                                one1 = i;
                                                two1 = j;
                                        }
                                        else {
                                                one2 = i;
                                                two2 = j;
                                        }
                                }
                        }
                }
                //both in same row
                if (one1 == one2) {
                        if (one1 != 3) {
                                a[one1 + 1][two1] = a[one1][two1];
                                a[one2 + 1][two2] = a[one2][two2];
                        }
                        else {
                                a[one1 - 1][two1] = a[one1][two1];
                                a[one2 - 1][two2] = a[one2][two2];
                        }
                }
                //both in same col
                if (two1 == two2) {
                        if (two1 != 3) {
                                a[one1][two1 + 1] = a[one1][two1];
                                a[one2][two2 + 1] = a[one2][two2];
                        }
                        else {
                                a[one1][two1 - 1] = a[one1][two1];
                                a[one2][two2 - 1] = a[one2][two2];
                        }
                }
                //not in same row/col
                else if (abs(a[one1][two1] - a[one2][two2]) % 2 == 0) {
                        if (one1 != 3) {
                                a[one1 + 1][two1] = a[one1][two1];
                        }
                        if (one1 == 3) {
                                a[one1 - 1][two1] = a[one1][two1];
                        }
                        if (one2 != 3) {
                                a[one2 + 1][two2] = a[one2][two2];
                        }
                        if (one2 == 3) {
                                a[one2 - 1][two2] = a[one2][two2];
                        }
                }
                else {
                        if (one1 != 3) {
                                a[one1 + 1][two1] = a[one1][two1] - 1;
                        }
                        if (one1 == 3) {
                                a[one1 - 1][two1] = a[one1][two1] - 1;
                        }
                        if (one2 != 3) {
                                a[one2 + 1][two2] = a[one2][two2] - 1;
                        }
                        if (one2 == 3) {
                                a[one2 - 1][two2] = a[one2][two2] - 1;
                        }
                }
        }
        if (xnt == 6) {
                int one1 = 1e18, two1, one2 = 1e18, two2, one3, two3;
                for (int i = 1; i <= 3; i++) {
                        for (int j = 1; j <= 3; j++) {
                                if (a[i][j] != 1e18) {
                                        if (one1 == 1e18) {
                                                one1 = i;
                                                two1 = j;
                                        }
                                        else if (one2 == 1e18) {
                                                one2 = i;
                                                two2 = j;
                                        }
                                        else {
                                                one3 = i;
                                                two3 = j;
                                        }
                                }
                        }
                }
                //all in same row
                if (one1 == one2 && one2 == one3) {
                        if (one1 != 3) {
                                a[one1 + 1][two1] = a[one1][two1];
                                a[one2 + 1][two2] = a[one2][two2];
                        }
                        if (one1 == 3) {
                                a[one1 - 1][two1] = a[one1][two1];
                                a[one2 - 1][two2] = a[one2][two2];
                        }
                }
                //all in same col
                else if (two1 == two2 && two2 == two3) {
                        if (two1 != 3) {
                                a[one1][two1 + 1] = a[one1][two1];
                                a[one2][two2 + 1] = a[one2][two2];
                        }
                        if (two1 == 3) {
                                a[one1][two1 - 1] = a[one1][two1];
                                a[one2][two2 - 1] = a[one2][two2];
                        }
                }
                //all in diff rows/cols

        }
        compute();compute();
        //middle cell
        if (xnt >= 4 && a[2][2] == 1e18) {
                if (a[1][2] != 1e18 && a[2][1] != 1e18) {
                        a[2][2] = .01*a[1][2]*.01*a[2][1];
                }
                else if (a[1][2] != 1e18 && a[2][3] != 1e18) {
                        a[2][2] = .01*a[1][2]*.01*a[2][3];
                }
                else if (a[3][2] != 1e18 && a[2][1] != 1e18) {
                        a[2][2] = .01*a[3][2]*.01*a[2][1];
                }
                if (a[3][2] != 1e18 && a[2][3] != 1e18) {
                        a[2][2] = .01*a[3][2]*.01*a[2][3];
                }
        }
        compute();compute();
        if (xnt >= 4 && a[2][3] == 1e18 && a[2][2] != 1e18 && a[1][3] != 1e18) {
                a[2][3] = .01*a[2][2]*.01*a[1][3];
        }
        compute();compute();
        //right middle cell
        if (xnt >= 4 && a[2][3] == 1e18) {
                if (a[2][2] != 1e18 && a[1][3] != 1e18) {
                        a[2][3] = .01*a[2][2]*.01*a[1][3];
                }
                else if (a[2][2] != 1e18 && a[3][3] != 1e18) {
                        a[2][3] = .01*a[3][3]*.01*a[2][2];
                }
        }
        compute();compute();
        //left middle cell
        if (xnt >= 4 && a[2][1] == 1e18) {
                if (a[2][2] != 1e18 && a[1][1] != 1e18) {
                        a[2][1] = .01*a[2][2]*.01*a[1][1];
                }
                else if (a[2][2] != 1e18 && a[3][1] != 1e18) {
                        a[2][1] = .01*a[3][1]*.01*a[2][2];
                }
        }
        compute();compute();
        //left bottom cell
        if (xnt >= 4 && a[3][1] == 1e18) {
                if (a[2][1] != 1e18 && a[3][2] != 1e18) {
                        a[3][1] = .01*a[2][1]*.01*a[3][2];
                }
        }
        compute();compute();
        //right bottom cell
        if (xnt >= 4 && a[3][3] == 1e18) {
                if (a[2][3] != 1e18 && a[3][2] != 1e18) {
                        a[3][3] = .01*a[2][3]*.01*a[3][2];
                }
        }
        compute();compute();
        //top left cell
        if (xnt >= 4 && a[1][1] == 1e18) {
                if (a[2][1] != 1e18 && a[1][2] != 1e18) {
                        a[1][1] = .01*a[2][1]*.01*a[1][2];
                }
        }
        compute();compute();
        //top right cell
        if (xnt >= 4 && a[1][3] == 1e18) {
                if (a[2][3] != 1e18 && a[1][2] != 1e18) {
                        a[1][3] = .01*a[2][3]*.01*a[1][2];
                }
        }
        compute();compute();
        //top middle cell
        if (xnt >= 4 && a[1][2] == 1e18) {
                if (a[1][1] != 1e18 && a[2][2] != 1e18) {
                        a[1][2] = .01*a[1][1]*.01*a[2][2];
                }
                else if (a[1][3] != 1e18 && a[2][2] != 1e18) {
                        a[1][2] = .01*a[2][2]*.01*a[1][3];
                }
        }
        //if xnt <= 3:
        for (int i = 1; i <= 2; i++)
                compute();
        for (int i = 1; i <= 3; i++) {
                for (int j = 1; j <= 3; j++) {
                        cout << a[i][j] << " ";
                }
                cout<<endl;
        }

        return 0;
}
