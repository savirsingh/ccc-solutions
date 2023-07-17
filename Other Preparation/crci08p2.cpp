// code by savir singh

#include <iostream>
#include <set>
using namespace std;
#define ll long long

const int MM = 51;
int r, n, acc = 0;
char mine[MM], your[MM][MM];

int add(int m, int y) {
    if (m == y) return 1;
    if (m == 'S' && y == 'P') return 2;
    if (m == 'P' && y == 'R') return 2;
    if (m == 'R' && y == 'S') return 2;
    return 0;
}

int solve() {
    int ans = 0;
    for (int i = 0; i < r; i++) {
        int sumR = 0, sumP = 0, sumS = 0;
        for (int j = 0; j < n; j++) {
            sumR += add('R', your[j][i]);
            sumP += add('P', your[j][i]);
            sumS += add('S', your[j][i]);
        }
        ans += max(sumR, max(sumP, sumS));
    }
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> r;
    for (int i = 0; i < r; i++) cin>>mine[i];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            cin>>your[i][j];
            acc += add(mine[j], your[i][j]);
        }
    }
    cout<<acc<<endl;//output actual score
    // For each round, try all options
    cout<<solve()<<endl;//output best score
}
