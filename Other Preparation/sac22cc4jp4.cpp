// code by savir singh
// https://dmoj.ca/problem/sac22cc4jp4
// 100/100

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) (int) (a).size()
#define rsz resize
#define pii pair<int, int>
#define eb emplace_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)
#define fr(i,x,n) for(int i=x;i>n;i--)
#define fre(i,x,n) for(int i=x;i>=n;i--)
#define mod 1000000007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MM = 1e5 + 1;
int n, k;
vector<int> a, p;
vector<vector<int>> nxt;

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

int32_t main() {
    cin >> n >> k;
    p.resize(n);
    f(i, 0, n) cin >> p[i];
    f(i, 0, 62) nxt.pb(vector<int>(n));
    f(i, 0, n) nxt[0][p[i]-1] = i;
    fe(i, 1, 61) {
        f(j, 0, n) {
            nxt[i][j] = nxt[i-1][nxt[i-1][j]];
        }
    }
    a = p;
    fre(i, 61, 0) {
        if (k >= (1LL << i)) {
            f(j, 0, n) a[j] = nxt[i][a[j]-1]+1;
            k -= (1LL << i);
        }
    }

    f(i, 0, n) {
        cout << a[i];
        if (i != n-1) cout << ' ';
    }
    cout << endl;
}
