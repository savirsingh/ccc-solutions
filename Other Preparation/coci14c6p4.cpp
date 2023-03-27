// code by savir singh
// https://dmoj.ca/problem/coci14c6p4
// 120/120

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

const int MM = 1e6 + 1;
int n, k, arr[MM];

int32_t main() {
    __; cin >> n >> k;
    fe(i, 1, n) arr[i] = i;
    if (k < (int)pow(n, 0.5)) cout << -1 << endl;
    else {
        for (int i = n - k + 1; i > 0; i -= k) {
            f(j, 0, k) {
                cout << i + j << " ";
            }
        }
        int so_far = n % k;
        for (int i = 1; i <= so_far; i++) {
            cout << i;
            if (i != so_far) cout << " ";
        }
        cout << endl;
    }
}
