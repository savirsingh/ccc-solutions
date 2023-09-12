// code by savir singh
// just a slightly shorter and more readable template.

#include <bits/stdc++.h>
using namespace std;

// Define commonly used macros
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define boost() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

int power(int x, int y) {
        int res = 1;x %= MOD;if (x == 0) return 0;while (y > 0) {if (y & 1) res = (res * x) % MOD;y >>= 1;x = (x * x) % MOD;}
        return res;
}

int gcd(int a, int b) {
        if (b == 0) return a;return gcd(b, a % b);
}

int32_t main() {
        boost();
        // Your code here

        return 0;
}
