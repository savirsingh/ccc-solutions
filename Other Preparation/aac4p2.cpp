// code by savir singh

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

const int MM = 2e5 + 1;
int n, q, a[MM], lcmpre[MM];

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

int gcd(int a, int b) {
    if (b==0)
        return a;
    return gcd(b, a%b);
}

int32_t main() {
    __ read(n); read(q);
    fe(i, 1, n) read(a[i]);
    lcmpre[0] = 1;
    int r = 0;
    fe(i, 1, n) {
        lcmpre[i] = lcmpre[i-1] * a[i] / gcd(lcmpre[i-1], a[i]); r++;
        if (lcmpre[i] > 1e9) break;
    }
    fe(i, 1, q) {
        int t; read(t);
        int lo = 1, hi = r, ans = -1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (t % lcmpre[mid] == 0) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
                ans = mid;
            }
        }
        cout << ans << endl;
    }
}
