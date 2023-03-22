// code by savir singh
// https://dmoj.ca/problem/coci14c2p3
// 100/100

#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MM = 5001;
int n, k, rep[MM];
pii v[MM];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i = 1, vi; i <= n; i++) {
        cin >> vi; v[i] = make_pair(vi, i);
    }
    sort(v + 1, v + n + 1);
    int idx = 1;
    for (int i = 1; i <= n; i++) {
        rep[v[i].second] = idx;
        if (i % k == 0) idx++;
    }
    vector<int> lis = {rep[1]};
    for (int i = 2; i <= n; i++) {
        if (rep[i] >= lis[lis.size()-1]) lis.push_back(rep[i]);
        else {
            int index = upper_bound(lis.begin(), lis.end(), rep[i]) - lis.begin();
            lis[index] = rep[i];
        }
    }
    cout << n - lis.size() << endl;
}

// - savir
/*
       /\     /\
      //\\___//\\
      \_  o o  _/
       /   ^   \
      /  '---'  \
     |__|_|_|__|
     |  | | |  |
     |__|_|_|__|
    /'-./  | \.-'\
   /   /   |   \   \
  (`-/-`)  |  (`-/-`)
   `"`"`"``|``"`"`"`
          \|/
           V
*/
