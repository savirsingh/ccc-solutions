// code by savir singh
// https://dmoj.ca/problem/coci10c2p2
// 10/10

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vpii vector<pii>
#define vvpii vector<vpii>
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(a) (int) (a).size()
#define rsz resize
#define pii pair<int, int>
#define eb emplace_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)
#define fr(i,x,n) for(int i=x;i>n;i--)
#define fre(i,x,n) for(int i=x;i>=n;i--)
#define mod 1000000007
#define mod2 998244353
#define INF 1e18
#define ld long double
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MM = 101;
int n;

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

bool compare(const string a, const string b) {
    if (a.size() < b.size()) return true;
    if (a.size() > b.size()) return false;
    return a < b;
}

int32_t main() {
    __ cin >> n;
    vector<string> nums;
    fe(i, 1, n) {
        string s; cin >> s;
        if (s[0] == '0' && !isdigit(s[1])) {
            nums.pb("0");
        }
        else if (isdigit(s[0])) {
            string adder(1, s[0]);
            nums.pb(adder);
        }
        f(j, 1, sz(s)) {
            if (isdigit(s[j])) {
                if (isdigit(s[j-1]) && !nums.empty()) {
                    if (s[j-1] == '0' && nums[nums.size()-1] == "0") {
                        string adder(1, s[j]);
                        nums.pop_back(); nums.pb(adder);
                    }
                    else nums[sz(nums)-1] = nums[sz(nums)-1] + s[j];
                }
                else {
                    string adder(1, s[j]);
                    nums.pb(adder);
                }
            }
        }
    }
    sort(nums.begin(), nums.end(), compare);
    f(i, 0, sz(nums)) {
        cout << nums[i] << endl;
    }
}
