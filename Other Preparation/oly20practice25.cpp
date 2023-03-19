// code by savir singh
// https://dmoj.ca/problem/oly20practice25
// 100/100
// Olympiads Homework

#include <bits/stdc++.h>
using namespace std;

const int MM = 1001;
int n, k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 1, s, t, r; i <= k; i++) {
        cin >> s >> t >> r;
        int q = 0, time = 0, ans = 0;
        while (true) {
            if (time == t) {
                time = 0;
                ans += r;
            }
            ans++; time++; q += s;
            if (q >= n) break;
        }
        cout << ans << endl;
    }
}
