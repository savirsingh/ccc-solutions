// code by savir singh
// https://dmoj.ca/problem/canada21p3
// 1/1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, k;
string n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    for (cin>>t;t--;) {
        cin>>n>>k;
        vector<int> stk;
        string ans;
        for (int i = 0; i < n.size(); i++) {
            while (!stk.empty() && n[stk.back()] > n[i] && k > 0) {
                k--;
                ans += n[stk.back()];
                stk.pop_back();
            }
            stk.push_back(i);
        }
        while (!stk.empty() && k > 0) {
            k--;
            ans += n[stk.back()];
            stk.pop_back();
        }
        for (int i : stk)cout<<n[i];//output ppl u didn't move
        sort(ans.begin(), ans.end());
        cout<<ans<<endl;//output the moved ppl in sorted order
    }
}
