// code by savir singh
// https://dmoj.ca/problem/cheerio1j1
// 15/15

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    else return false;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    for (int i = 1; i < s.size(); i++) {
        if ((isvowel(s[i]) && isvowel(s[i-1])) || (!isvowel(s[i]) && !isvowel(s[i-1]))) {
            cout << "NO\n";return false;
        }
    }
    cout << "YES\n";
}
