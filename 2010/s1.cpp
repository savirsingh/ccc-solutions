// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

int n;

vector<pair<int, string>> sort(vector<pair<int, string>> vec) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (vec[i].first>vec[j].first) {
                swap(vec[i], vec[j]);
            }
            else if (vec[i].first==vec[j].first) {
                if (vec[i].second < vec[j].second) swap(vec[i], vec[j]);
            }
        }
    }
    return vec;
}

int32_t main(){
    cin >> n;
    vector<pair<int, string>> top;
    for (int i=1; i<=n; i++) {
        string name; int r, s, d;
        cin >> name >> r >> s >> d;
        top.push_back({2*r+3*s+d, name});
    }
    top=sort(top);
    if (n==0) return false;
    if (n==1) {cout << top[0].second << endl; return false;}
    for (int i=1; i<=2; i++) {
        cout << top[0].second << endl;
        top.erase(top.begin()+0);
    }
}
