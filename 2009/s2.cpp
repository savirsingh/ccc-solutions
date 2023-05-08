// code by savir singh
// 50/50 on DMOJ

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

const int MM = 31;
set<int> cur, prevv;
int r, l, nums[MM];

int32_t main() {
    __ cin >> r >> l;
    fe(i, 1, r)
    {
        string s;
        fe(j, 1, l)
        {
            char a; cin >> a;
            s += a;
        }
        nums[i] = stoi(s, nullptr, 2);
    }
    prevv.insert(nums[1]);
    fe(i, 2, r)
    {
        cur.clear(); cur.insert(nums[i]);
        for (auto j : prevv) {
            cur.insert(j ^ nums[i]);
        }
        prevv = cur;
    }
    cout << cur.size() << endl;
}
