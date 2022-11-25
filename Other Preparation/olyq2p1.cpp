// code by savir singh
// https://dmoj.ca/problem/olyq2p1
// 100/100

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

// all vars
const int MAXN=1e5+2, inf=1e9+2;
int dist[MAXN];
int N, M;

// count function
int count1(int length)
{
    int cnt=1, curr=dist[0];
    for (int i=0; i<N; i++) {
        if (dist[i]>=curr+length) {
            curr=dist[i];
            cnt++;
        }
    }
    return cnt;
}


// driver code
bit32 main()
{
    cin >> N >> M;
    for (int i=0; i<N; i++) {
        cin >> dist[i];
    }
    sort(dist, dist+N);
    int left=0, right=inf;
    while (left+1<right) {
        int mid=(left+right)/2;
        if (count1(mid)<M) {
            right=mid;
        }
        else {
            left=mid;
        }
    }
    cout << left << "\n";
}
