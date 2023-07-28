// code by savir singh
// https://dmoj.ca/problem/ccoprep5p1
// 100/100

#include <bits/stdc++.h>
using namespace std;

// Compiler Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

// Shorthand Macros
#define bit32 int32_t
//#define int long long - no need for this here
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

// Function to calculate the largest rectangle area in a histogram
inline int largestRec(const vector<int>& heights) {
    stack<int> stk;
    int maxArea = 0;
    int n = sz(heights);

    fe(i, 0, n) {
        while (!stk.empty() && (i == n || heights[stk.top()] > heights[i])) {
            int height = heights[stk.top()];
            stk.pop();
            int width = stk.empty() ? i : i - stk.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        stk.push(i);
    }

    return maxArea;
}

// Function to find the largest rectangular subgrid of 'F's
inline int largestGrid(const vector<vector<char>>& grid) {
    int n = sz(grid);
    if (n == 0) return 0;

    int m = sz(grid[0]);
    vvi heights(n, vi(m, 0));

    // Convert the grid into histogram rows
    f(j, 0, m) {
        f(i, 0, n) {
            if (grid[i][j] == 'F')
                heights[i][j] = (i > 0) ? heights[i - 1][j] + 1 : 1;
        }
    }

    int maxArea = 0;

    // Find the largest rectangle in each row's histogram
    f(i, 0, n) {
        maxArea = max(maxArea, largestRec(heights[i]));
    }

    return maxArea;
}

bit32 main() {
    __
    w(k) {
        int n, m;
        cin>>n>>m;
        vector<vector<char>> grid(n, vector<char>(m));
        f(i, 0, n) {
            f(j, 0, m) {
                cin >> grid[i][j];
            }
        }
        cout << largestGrid(grid) * 3 << endl;
    }

    return 0;
}
