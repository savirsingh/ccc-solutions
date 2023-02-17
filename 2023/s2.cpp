// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAX = 5008;
int n, h[MAX], ans[MAX], pre[MAX][MAX];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> h[i];
    memset(ans, 0x3f, sizeof ans);
    for(int i=2;i<=n;i++)
    for(int j=1;i+j-1<=n;j++) {
      pre[i][j]=abs(h[j]-h[i+j-1])+pre[i-2][j+1];
      ans[i]=min(ans[i],pre[i][j]);
    }
    ans[1] = 0;
    for (int i=1; i<=n; i++) {
        cout << ans[i];
        if (i!=n) cout << " ";
    }
    cout << endl;
}
