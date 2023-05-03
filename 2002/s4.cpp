// code by savir singh

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

const int MM = 101;
int m, q, time_[MM], dp[MM], le[MM];
string name[MM];
vector<vector<int>> groups;

// dp[i] = min time for first i people to cross

int32_t main() {
    memset(dp, 0x3f, sizeof dp);
    __ cin >> m >> q;
    fe(i, 1, q) cin >> name[i] >> time_[i];
    dp[0] = 0;
    fe(i, 0, q)
    {
        fe(j, i + 1, i + m)
        {
            int temp = dp[i];
            int mm = 0;
            fe(k, i + 1, j)
            {
                mm = max(mm, time_[k]);
            }
            temp += mm;
            if (temp < dp[j]) {
                dp[j] = temp;le[j] = j - i;
            }
        }
    }
    int j = q;
    while (j > 0) {
        int i = j - le[j];
        vector<int> group;
        for (int k = i + 1; k <= j; k++) {
            int mm = 0;
            fe(x, i + 1, j)
            {
                mm = max(mm, time_[k]);
            }
            if (time_[k] == mm) {
                group.push_back(k);
            }
        }
        groups.insert(groups.begin(), group);
        j = i;
    }

    cout << "Total Time: " << dp[q] << endl;
    for (const auto& group : groups) {
        f(i, 0, group.size()) {
            cout << name[group[i]];
            if (i < group.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }


}
