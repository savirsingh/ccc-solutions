// code by savir singh
// https://dmoj.ca/problem/usaco20decb2
// 100/100
// olympiads school only

#include <bits/stdc++.h>
#define int float
#define del erase
#define pb push_back
using namespace std;

vector<int> get_slice(vector<int> v, int start, int end_)
{
    vector<int> new_vector;
    for (int s=start; s<end_; s++) {
        new_vector.pb(v[s]);
    }
    return new_vector;
}

int get_sum(vector<int> v)
{
    int sum=0;
    for (int s=0; s<v.size(); s++) {
        sum+=v[s];
    }
    return sum;
}

// driver code
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, counter=0;
    cin >> n;
    vector<int> flowers;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        flowers.pb(a);
    }
    for (int j=0; j<n; j++) {
        for (int k=j; k<n; k++) {
            vector<int> slice = get_slice(flowers, j, k+1);
            int sum = get_sum(slice);
            if (find(slice.begin(), slice.end(), sum/slice.size())!=slice.end()) {
                counter++;
            }
        }
    }
    cout << counter;
}
