// code by savir singh
// https://dmoj.ca/problem/dmopc18c5p3
// 100/100

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#define int long long
using namespace std;

int n, m;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scan(n); scan(m);
    int c[n+1];
    for (int i=1; i<=n; i++) scan(c[i]);
    int left=1, right=1, curr=0, fin=0;
    while (right<=n) {
        curr+=c[right];
        while (curr>=m) {
            curr-=c[left];
            left++;
        }
        fin=max(fin, right-left+1);
        right++;
    }
    cout << fin << endl;
}
