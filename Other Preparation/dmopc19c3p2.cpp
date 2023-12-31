// code by savir singh
// https://dmoj.ca/problem/dmopc19c3p2
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mm = 16;
int N, K, fact[mm], freq[200];
bool vis[200];
set<string> st;
string s;

inline int sum() {
    memset(vis, false, sizeof vis);
    for (char i = 'a'; i <= 'z'; i++) {
        freq[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        freq[s[i]]++;
    }
    int div = 1;
    for (int i = 0; i < N; i++) {
        if (!vis[s[i]]) {
            vis[s[i]] = true;
            div *= fact[freq[s[i]]];
        }
    }
    return fact[N] / div;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //simulation
    cin >> N >> K >> s;
    int k1 = -1, k2 = -1;
    for (char i = 0; i < N; i++) {
        if (s[i] == '*' && k1 == -1) {
            k1 = i;
        }
        else if (s[i] == '*') {
            k2 = i;
            break;
        }
    }
    fact[0] = 1LL;
    for (int i = 1; i <= N; i++) {
        fact[i] = i * fact[i-1];
    }
    if (K == 0) {
        cout << sum() << endl; return 0;
    }
    int ans = 0;
    if (K == 1) {
        for (char i = 'a'; i <= 'z'; i++) {
            s[k1] = i;
            ans += sum();
        }
        cout << ans << endl; return 0;
    }
    for (char i = 'a'; i <= 'z'; i++) {
        s[k1] = i;
        for (char j = 'a'; j <= 'z'; j++) {
            s[k2] = j;
            string nw = s;
            sort(nw.begin(), nw.end());
            if (st.find(nw) == st.end()) ans += sum();
            st.insert(nw);
        }
    }
    cout << ans << endl; return 0;
}
