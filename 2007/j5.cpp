// code by savir singh
// 15/15

#pragma GCC optimize("Ofast", "unroll-loops")
#pragma optimize( "", off )
#pragma optimize( "", on )
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
const int MAX=7002;
int A, B, N;
vector<int> motels = {0, 0, 990, 1010, 1970, 2030, 2940, 3060, 3930, 4060, 4970, 5030, 5990, 6010, 7000};
int dp[MAX];

// solve function
void solve()
{
    sort(motels.begin(), motels.end());
    for (int i=0; i<=motels.size()+2; i++) {
        dp[i]=0; // make everything 0
    }
    dp[1]=1; // base case
    for (int i=1; i<=motels.size(); i++) { // real sol
        int add=0;
        while (motels[i+add]-motels[i]<=B) {
            if (motels[i+add]-motels[i]>=A) {
                dp[i+add]+=dp[i];
            }
            add++;
        }
    }
    cout << dp[motels.size()-1] << "\n";
}

// driver code
bit32 main() {
    read(A); read(B); read(N);
    for (int i=0; i<N; i++) {
        int m; read(m);
        motels.pb(m);
    }
    solve();
}
