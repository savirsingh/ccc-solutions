// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, ans=0;
    cin >> c;
    int need[3][c+1];
    bool wet[3][c+1];
    for (int i=1; i<=2; i++) {
        for (int j=1; j<=c; j++) {
            need[i][j] = 3;
        }
    }
    memset(wet, false, sizeof wet);
    for (int i=1; i<=2; i++) {
        for (int j=1; j<=c; j++) {
            int a; cin >> a;
            if (a==1) {
                wet[i][j] = true;
                if (j%2==1 && i==1) need[2][j]--;
                if (j<c) need[i][j+1]--;
                if (j>1) need[i][j-1]--;
                if (j%2==1 && i==2) need[i-1][j]--;
            }
        }
    }
    for (int i=1; i<=2; i++) {
        for (int j=1; j<=c; j++) {
            if (wet[i][j]) ans+=need[i][j];
        }
    }
    cout << ans << endl;
}
