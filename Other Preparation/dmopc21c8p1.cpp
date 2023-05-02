// code by savir singh
// https://dmoj.ca/problem/dmopc21c8p1

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
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

const int MM = 5e5 + 1;
int n, m;
multiset<int> multi;
vector<int> vec;
bool used[MM];

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
    memset(used, false, sizeof used);
    __ read(n); read(m);
    fe(i, 1, n)
    {
        int x; read(x);
        multi.insert(x);
    }
    auto firstel = min_element(multi.begin(), multi.end());
    int firstelind = *firstel;
    vec.push_back(firstelind);
    multi.erase(firstel);
    f(i, 1, n)
    {
        auto x = multi.lower_bound(m - vec[i-1]);
        int ind = *x;
        if (x == multi.end()) {
            cout << -1 << endl; return false;
        }
        if (vec[i-1] + ind < m) {
            cout << -1 << endl; return false;
        }
        multi.erase(x);
        vec.push_back(ind);
    }
    f(i, 0, n - 1) cout << vec[i] << " ";
    cout << vec[n-1] << endl;
}
