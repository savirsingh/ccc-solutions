// code by savir singh
// https://dmoj.ca/problem/waterloo2017wb
// 100/100

// I also cheesed this problem (got 100/100 with incorrect sol)
// check waterloo2017wb_cheese.cpp for the cheese sol

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

const int MM = 2001;
int n, k, freq[30];
string a;

int32_t main() {
    __; cin >> n >> k >> a;
    f(i, 0, sz(a)) freq[a[i] - 'a']++;
    char best;
    int minfreq = INT_MAX;
    f(i, 0, 26) {
        if (freq[i] < minfreq) {
            best = i + 'a';
            minfreq = freq[i];
        }
    }
    if (k < minfreq || k > n) cout << "WRONGANSWER" << endl;
    else {
        int so_far = k - minfreq;
        f(i, 0, n) {
            if (so_far > 0) {
                cout << a[i];
                if (a[i] != best) so_far--;
            }
            else cout << best;
        }
        cout << endl;
    }
}
