// code by savir singh

#pragma GCC optimize("O3")
#include <stdio.h>

// Shorthand Macros
#define int long long

//vars
#define mm 200002
int n, k, a[mm], psa[mm], ans = 0; //at least one (+)

int deq[2 * mm][2];
int deq_front = 0;
int deq_back = -1;

void push_back(int i, int val) {
    while (deq_front <= deq_back && deq[deq_back][1] > val)
        deq_back--;
    deq_back++;
    deq[deq_back][0] = i;
    deq[deq_back][1] = val;
}

void pop_front(int i) {
    if (deq_front <= deq_back && deq[deq_front][0] < i)
        deq_front++;
}

int front_value() {
    return deq[deq_front][1];
}

int readInt() {
    int x = 0, c, sign = 1;
    c = getchar();
    if (c == '-') {
        sign = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + (c - '0');
        c = getchar();
    }
    return x * sign;
}

void writeInt(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n == 0) {
        putchar('0');
        return;
    }
    char buf[20];
    int i = 0;
    while (n) {
        buf[i++] = n % 10 + '0';
        n /= 10;
    }
    i--;
    while (i >= 0) {
        putchar(buf[i]);
        i--;
    }
}

signed main() {
    n = readInt();
    k = readInt();
    for (int i = 1; i <= n; i++)
        a[i] = readInt();

    //for circle just double the array
    for (int i = n + 1; i <= 2 * n; i++)
        a[i] = a[i - n];

    psa[0] = 0;
    for (int i = 1; i <= 2 * n; i++) {
        psa[i] = psa[i - 1] + a[i];
    }

    for (int i = 1; i <= 2 * n; i++) {
        pop_front(i - k);
        push_back(i, psa[i]);
        ans = ans > (psa[i] - front_value()) ? ans : (psa[i] - front_value());
    }
    writeInt(ans);
    putchar('\n');

    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//// Compiler Optimizations
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//
//// Shorthand Macros
//#define bit32 int32_t
//#define int long long // comment out if unnecessary
//#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define endl '\n'
//#define pb push_back
//#define pii pair<int, int>
//#define vi vector<int>
//#define vvi vector<vi>
//#define vvvi vector<vvi>
//#define vpii vector<pii>
//#define vvpii vector<vpii>
//#define all(v) (v).begin(), (v).end()
//#define rall(v) (v).rbegin(), (v).rend()
//#define sz(a) (int) (a).size()
//#define rsz resize
//#define eb emplace_back
//#define f(i,x,n) for(int i=x;i<n;i++)
//#define fe(i,x,n) for(int i=x;i<=n;i++)
//#define fr(i,x,n) for(int i=x;i>n;i--)
//#define fre(i,x,n) for(int i=x;i>=n;i--)
//#define mod 1000000007
//#define mod2 998244353
//#define INF 1e18
//#define ld long double
//#define setbits(x) __builtin_popcountll(x)
//#define zrobits(x) __builtin_ctzll(x)
//#define ps(x,y) fixed<<setprecision(y)<<x
//#define w(x) int x; cin>>x; while(x--)
//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
//
//// Fast Input
//template<typename T, typename... Args>
//inline void fastscan(T& num, Args&... args) {
//    int c = getchar();
//    num = 0;
//    bool neg = false;
//
//    // Handle negative numbers
//    if (c == '-') {
//        neg = true;
//        c = getchar();
//    }
//
//    // Process digits
//    while (c >= '0' && c <= '9') {
//        num = num * 10 + (c - '0');
//        c = getchar();
//    }
//
//    if (neg)
//        num = -num;
//
//    if constexpr (sizeof...(args) > 0)
//        fastscan(args...); // Recursively read the remaining arguments
//}
//
//// == your template ends here, start coding!!! ==
//
//
////vars
//const int mm = 1e5 + 1;
//int n, k, a[mm * 2], psa[mm * 2], ans = 0;//at least one (+)
//
//bit32 main() {
//    __
//    fastscan(n, k);
//    fe(i, 1, n) fastscan(a[i]);
//    //for circle just double the array
//    fe(i, n + 1, 2 * n) a[i] = a[i - n];
//    fe(i, 1, 2 * n) psa[i] = psa[i - 1] + a[i];
//    deque<pii> deq;
//    fe(i, 1, 2 * n) {
//        while (i > k && !deq.empty() && deq.front().first < i - k)
//            deq.pop_front();
//        while (!deq.empty() && deq.back().second > psa[i])
//            deq.pop_back();
//        deq.pb({i, psa[i]});
//        ans = max(ans, psa[i] - deq.front().second);
//    }
//    cout << ans << endl;
//
//    return 0;
//}
