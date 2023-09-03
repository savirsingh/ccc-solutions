// code by savir singh
// https://dmoj.ca/problem/xorm
// 17/17

// Include everything needed for CP
#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
#define int long long // comment out if unnecessary
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
#define w(x) int x; fastscan(x); while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// Fast Input
template<typename T, typename... Args>
inline void fastscan(T& num, Args&... args) {
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

        if constexpr (sizeof...(args) > 0)
                fastscan(args...); // Recursively read the remaining arguments
}

// Fast Output For Integers
inline void fastprint(int num, const string& endline = "\n") {
        if (num < 0) {
                putchar('-');
                num = -num;
        }
        char buffer[20];
        int idx = 19;
        buffer[idx--] = '\0';

        do {
                buffer[idx--] = static_cast<char>('0' + num % 10);
                num /= 10;
        }while (num > 0);

        fputs(&buffer[idx + 1], stdout);
        fputs(endline.c_str(), stdout);
}

// Fast Output for Strings
inline void fastprint(const string& s, const string& endline = "\n") {
        fputs(s.c_str(), stdout);
        fputs(endline.c_str(), stdout);
}

// == your template ends here, start coding!!! ==

//vars
const int mm = 1e5 + 1;
int n, q;

struct node {
        node* child[2];
        int m_i;
        node() {child[0]=child[1]=nullptr;m_i=INT_MAX;}
};

node* root = nullptr;
int overall = 0;

inline void ins(node* cur, int x, int i, int k){
	if(k == 0){
                //get min ind
		cur->m_i = min(cur->m_i, i);
		return;
	}
	node* &nxt = cur->child[(bool)(x & k)];//check k-th bit
	k >>= 1;
	if (!nxt) {
                nxt = new node;
	}
	ins(nxt, x, i, k);
}

inline int dfs(node* cur, int k) {
        if (k == 0) {
                return cur->m_i;//min index
        }
        int chk = (bool)(overall & k);
        node* &nxt = cur->child[chk];
        node* &oth = cur->child[!chk];
        k >>= 1;
        if (nxt) {
                return dfs(nxt, k);
        }
        return dfs(oth, k);
}

bit32 main() {
        __
        fastscan(n, q);
        root = new node;
        fe(i, 1, n) {
                int x; fastscan(x);
                ins(root, x, i, 1 << 29);
        }
        for(;q--;) {
                int x; fastscan(x);
                overall ^= x;
                fastprint(dfs(root, 1 << 29) - 1);
        }

        return 0;
}
