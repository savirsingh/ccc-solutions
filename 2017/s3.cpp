// code by savir singh
// 15/15 FINALLY!
// idk why it took so long

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

// all vars;
const int MAX=2003;
int freq[MAX+1];
int cnt[2*MAX+1];

// driver code
bit32 main(){
    int n; cin >> n;
    for (int i=1; i<=n; i++) {
        int a; cin >> a;
        freq[a]++;
    }
    for (int i=1; i<=MAX; i++) {
        for (int j=i; j<MAX; j++) {
            if (i==j) {cnt[i+j]+=freq[i]/2;}
            else {cnt[i+j]+=min(freq[i], freq[j]);}
        }
    }
    int m=0, ans=0;
    for (int i=1; i<=MAX*2; i++) {
        int curr=cnt[i];
        if (curr>m) {m=curr; ans=1;}
        else if (curr==m) {ans++;}
    }
    cout << m << " " << ans;
}
