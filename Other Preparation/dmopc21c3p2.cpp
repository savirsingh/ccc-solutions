// code by savir singh

#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
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

// Fast Input
inline void fastscan(int &num) {
    int c = getchar();
    num = 0;
    bool neg = false;

    // Handle negative numbers
    if (c == '-') {
        neg = true;
        c = getchar();
    }

    // Process digits
    while (c >= '0' && c <= '9') {
        num = num * 10 + (c - '0');
        c = getchar();
    }

    if (neg)
        num = -num;
}

// == your template ends here, start coding!!! ==

// vars
int k, ans[1000008];

inline int calc(int x) {
    return x*(x-1)/2;
}

// Helper function for the second subtask
inline int solve() {
    if (k == 0) {
        cout << 1 << endl;
        cout << 1 << endl;
        return 0;
    }

    if (k == calc(1e6 + 1)) {
        cout << 1000000 << endl;
        f(i, 0, 1000000-1) cout << 0 << " ";
        cout<<0<<endl;
        return 0;
    }

    int A = 0, B = 1e6 + 1;
    while (A <= 1000000 && B >= 1) {
        int sum = 1LL * A * (A + 1) / 2 + 1LL * B * (B + 1) / 2;
        if (sum == k && A + B <= 1000001) {
            cout << A + B + 1 << endl;
            // Valid array found
            fe(i, 1, A) ans[i] = 0;
            ans[A + 1] = 1;
            fe(i, A + 2, B - 1) ans[i] = 0;
            for (int i = 1; i < A + B; i++) {
                cout << ans[i] << " ";
            }
            cout << ans[A + B] << " " << 0 << endl;
            return 0;
        }
        if (sum < k) {
            // Increase A
            ++A;
        } else {
            // Decrease B
            --B;
        }
    }
    cout << -1 << endl;
    return 0;
}


bit32 main() {
    __
    fastscan(k);
    solve();

    return 0;
}
