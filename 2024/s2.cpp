// code by savir singh
// https://dmoj.ca/problem/ccc24s2
// 15/15

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

const int mm = 200;
int N, freq[mm];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T, N; cin >> T >> N;
    while (T--) {
        string s; cin >> s;
        for (char i = 'a'; i <= 'z'; i++) {
            freq[i] = 0;
        }
        for (int i = 0; i < N; i++) {
            freq[s[i]]++;
        }
        bool prev = false, good = true;
        if (freq[s[0]] > 1) prev = true;
        for (int i = 1; i < N; i++) {
            if (prev && freq[s[i]] != 1) {
                cout << "F\n";
                good = false;
                break;
            }
            if (!prev && freq[s[i]] == 1) {
                cout << "F\n";
                good = false;
                break;
            }
            if (freq[s[i]] > 1) prev = true;
            else prev = false;
        }
        if (good) cout << "T\n";
    }

    return 0;
}
