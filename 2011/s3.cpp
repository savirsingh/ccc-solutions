// code by savir singh

#include <bits/stdc++.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
using namespace std;

int t;

bool work(int m, int x, int y) {
    int u=x/pow(5, m-1);
    int v=y/pow(5, m-1);
    if (u==0) return false;
    if ((u>0 && u<4 && v==0) || (u==2 && v==1)) return true;
    if (((u==1 || u==3) && v==1) || (u==2 && v==2)) {
        return work(m-1, x%(int)pow(5, m-1), y%(int)pow(5, m-1));
    }
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--) {
        int m, x, y;
        cin >> m >> x >> y;
        if (work(m, x, y)) cout << "crystal" << endl;
        else cout << "empty" << endl;
    }
}
