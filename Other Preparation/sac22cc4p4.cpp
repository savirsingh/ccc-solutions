// code by savir singh

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

const int MM = 1e6 + 5;
int n, B, T, a[MM];
deque<int> mxq, mnq;

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

int count(int threshold) {
    int ans = 0;
    int l = 1;
    mxq.clear(), mnq.clear();
    for (int r = 1; r <= n; r++) {
        while (!mxq.empty() && a[mxq.back()] <= a[r]) mxq.pop_back();
        mxq.push_back(r);
        while (!mnq.empty() && a[mnq.back()] >= a[r]) mnq.pop_back();
        mnq.push_back(r);
        while (!mxq.empty() && !mnq.empty() && a[mxq.front()] - a[mnq.front()] > threshold) {
            if (mxq.front() < mnq.front()) {
                l = mxq.front() + 1;
                mxq.pop_front();
            } else {
                l = mnq.front() + 1;
                mnq.pop_front();
            }
        }
        ans += r - l + 1;
    }
    return ans;
}

int32_t main() {
    __ read(n); read(B); read(T);
    for (int i = 1; i <= n; i++) {
        read(a[i]);
    }
    cout << count(T) - count(B - 1) << endl;
}
