// code by savir singh
// https://dmoj.ca/problem/coci08c2p3
// 70/70
// olympiads school homework

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

// all vars
int n;
vector<pii> vec;
vector<vector<int>> combs;

// combinations function
void func(int i, vector<int>& comb){
    if(i > n) {
        combs.pb(comb); return;
    }
    func(i+1, comb); //don't choose i
    comb.pb(i); func(i+1, comb); comb.pop_back(); //choose i
}

// driver code
bit32 main(){
    int num; cin >> num; vector<int> comb;
    n=num-1;
    for (int i=0; i<num; i++) {
        int s, b;
        cin >> s >> b;
        vec.pb({s, b});
    }
    func(0, comb);
    vector<int> diffs;
    for (vector<int> i : combs) {
        int total_sourness=1;
        int total_bitterness=0;
        // continue if comb size=0
        if (i.size()==0) {
            continue;
        }
        // loop through each comb
        for (int c : i) {
            pii curr=vec[c];
            total_sourness*=curr.first;
            total_bitterness+=curr.second;
        }
        int abs_diff=abs(total_bitterness-total_sourness);
        diffs.pb(abs_diff);
    }
    cout << *min_element(diffs.begin(), diffs.end());
}
