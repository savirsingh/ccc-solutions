// code by savir singh

#include <iostream>
using namespace std;
#define pii pair<int, int>
#define ll long long

const int MM = 401;
int r, c, psa[MM][MM], best = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            char c; cin >> c;
            if (c == 'X') psa[i][j] = psa[i][j-1] + 1;
            else psa[i][j] = psa[i][j-1];
        }
    }
    for (int i = 1; i <= c; i++) {
        for (int j = i; j <= c; j++){
            int cur = 0;
            for (int k = 1; k <= r; k++) {
                if (!(psa[k][j] - psa[k][i-1]))cur++;
                else {
                    if (cur > 0) best = max(best, 2*cur+2*(j-i + 1));
                    cur = 0;
                }
            }
            if (cur > 0) best = max(best, 2*cur+2*(j-i + 1));
        }
    }
    cout<<best-1<<endl; //-1 bc he sits too
}
