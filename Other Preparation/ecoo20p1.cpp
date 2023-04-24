// code by savir singh
// https://dmoj.ca/problem/ecoo20p1
// 100/100

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

const int MM = 201;
map<string, int> mpa;

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

bool work(string a, string b, int ap)
{
    if (mpa[b] - mpa[a] == ap || mpa[b] + 12 - mpa[a] == ap) return true;
    return false;
}

bool dsc(string a, string b, string c, string d)
{
    if (work(a, b, 4) and work(b, c, 3) and work(c, d, 3)) return true;
    return false;
}

int32_t main() {
    __
    mpa["C"] = 1;mpa["C#"] = 2;mpa["D"] = 3;mpa["D#"] = 4;mpa["E"] = 5;mpa["F"] = 6;mpa["F#"] = 7;mpa["G"] = 8;mpa["G#"] = 9;mpa["A"] = 10;mpa["A#"] = 11;mpa["B"] = 12;
    w(t)
    {
        string a, b, c, d; cin >> a >> b >> c >> d;
        if (dsc(a, b, c, d)) cout << "root" << endl;
        else if (dsc(d, a, b, c)) cout << "first" << endl;
        else if (dsc(c, d, a, b)) cout << "second" << endl;
        else if (dsc(b, c, d, a)) cout << "third" << endl;
        else cout << "invalid" << endl;
    }
}
