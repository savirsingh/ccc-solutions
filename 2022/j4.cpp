// code by savir singh
// 15/15 on DMOJ & CCC Grader

#include <bits/stdc++.h>
#define int long long
#define del erase
#define pb push_back
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> point_to;
    vector<vector<string>> same_group;
    vector<vector<string>> diff_group;
    int violations=0;
    int x;
    cin >> x;
    for (int i=0; i<x; i++) {
        string p1, p2;
        cin >> p1 >> p2;
        vector<string> st;
        st.push_back(p1);
        st.push_back(p2);
        same_group.push_back(st);
    }
    int y;
    cin >> y;
    for (int i=0; i<y; i++) {
        string p1, p2;
        cin >> p1 >> p2;
        vector<string> st;
        st.push_back(p1);
        st.push_back(p2);
        diff_group.push_back(st);
    }
    int g;
    cin >> g;
    int rounds=1;
    while (rounds<=g) {
        string p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        vector<string> tri;
        tri.push_back(p1);
        tri.push_back(p2);
        tri.push_back(p3);
        for (int j=0; j<3; j++) {
            point_to[tri[j]] = rounds;
        }
        rounds++;
    }
    for (int k=0; k<x; k++) {
        int p1 = point_to[same_group[k][0]];
        int p2 = point_to[same_group[k][1]];
        if (p1!=p2) {
            violations++;
        }
    }
    for (int l=0; l<y; l++) {
        int p1 = point_to[diff_group[l][0]];
        int p2 = point_to[diff_group[l][1]];
        if (p1==p2) {
            violations++;
        }
    }
    cout << violations;
}
