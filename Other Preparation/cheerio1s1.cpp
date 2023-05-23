// code by savir singh

#include <bits/stdc++.h>
using namespace std;

const int MM = 2e5 + 1;
int n, d;

vector<vector<int>> number_line;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>d;for(int i=1, p, r, g;i<=n;i++){cin>>p>>r>>g;number_line.push_back({p, r, g});}
    sort(number_line.begin(), number_line.end());
    long long time = 0, prev = 0;
    for (auto i : number_line) {
        //cout << time << endl;
        time += i[0] - prev;
        int combin = time % (i[1] + i[2]);
        time += max(i[1] - combin, 0);
        prev = i[0];
    }
    cout << time + d - prev << endl;
}
