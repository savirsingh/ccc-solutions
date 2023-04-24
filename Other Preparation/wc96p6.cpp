// code by savir singh
// https://dmoj.ca/problem/wc96p6
// 5/5

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

int conbten(int a, int b)
{
    int num = 0;
    int power = 0;
    while (a != 0) {
        int digit = a % 10;
        num += digit * pow(b, power);
        power++;
        a /= 10;
    }
    return num;
}

int convertToBase(int num, int base)
{
    int result = 0;
    int multiplier = 1;
    while (num != 0) {
        int digit = num % base;
        result += digit * multiplier;
        multiplier *= 10;
        num /= base;
    }
    return result;
}

int32_t main() {
    __
    int t = 5;
    while (t--) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        int res = conbten(a, b) * conbten(c, d);
        cout << convertToBase(res, e) << endl;
    }
}
