#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int n;
vector<int> rows;

int32_t main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        vector<int> row;
        for (int j = 0; j < n; ++j) {
            int x; cin >> x; row.push_back(x);
        }
        sort(row.begin(), row.end());
        rows.push_back(row[n/2]);
    }
    sort(rows.begin(), rows.end());
    cout << rows[n/2] << endl;
}