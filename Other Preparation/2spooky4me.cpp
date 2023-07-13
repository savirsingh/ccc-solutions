#include <bits/stdc++.h>
using namespace std;

int n, m, k, house = 0, sp = 0, ans = 0;
map<int, int> spook;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        int a, b, s; cin >> a >> b >> s;
        spook[a] += s; spook[b + 1] -= s;
    }
    for (auto i : spook) {
        i.second += sp;
        if (sp < k) {
            ans += i.first - house;
        }
        house = i.first;sp = i.second;
    }
    if (abs(--spook.end()->second) < k) ans += m - house;
    cout << ans<< endl;
}