// code by savir singh

// SOB spent half an hour debugging
// I forgot to reset the orig deque
// SOB SOB SOB

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
void fastscan(T& num, Args&... args) {
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

// == your template ends here, start coding!!! ==

//vars
const int mm = 5e4 + 1;
int n;

bit32 main() {
    __
    int test = 0;
    w(t) {
        ++test;
        fastscan(n);
        deque<int> orig, nxt;
        vector<int> spare;
        fe(i, 1, n) {
            int a; fastscan(a);
            orig.push_back(a);
            spare.push_back(a);
        }
        int failure = 0;
        while (!orig.empty()) {
            if (nxt.empty()) {
                nxt.push_back(orig.back());orig.pop_back();
            }
            else if (orig.front() == nxt.front() - 1) {
                nxt.push_front(orig.front());orig.pop_front();
            }
            else if (orig.back() == nxt.front() - 1) {
                nxt.push_front(orig.back());orig.pop_back();
            }
            else if (orig.back() == nxt.back() + 1) {
                nxt.push_back(orig.back());orig.pop_back();
            }
            else if (orig.front() == nxt.back() + 1) {
                nxt.push_back(orig.front());orig.pop_front();
            }
            else {
                ++failure;
                break;
            }
        }
        nxt.clear();
        orig.clear();
        for (int i : spare) orig.push_back(i);
        while (!orig.empty()) {
            if (nxt.empty()) {
                nxt.push_back(orig.front());orig.pop_front();
            }
            else if (orig.front() == nxt.front() - 1) {
                nxt.push_front(orig.front());orig.pop_front();
            }
            else if (orig.back() == nxt.front() - 1) {
                nxt.push_front(orig.back());orig.pop_back();
            }
            else if (orig.back() == nxt.back() + 1) {
                nxt.push_back(orig.back());orig.pop_back();
            }
            else if (orig.front() == nxt.back() + 1) {
                nxt.push_back(orig.front());orig.pop_front();
            }
            else {
                ++failure;
                break;
            }
        }
        if (failure == 2) cout << "Case #" << test << ": no" << endl;
        else cout << "Case #" << test << ": yes" << endl;
    }

    return 0;
}
