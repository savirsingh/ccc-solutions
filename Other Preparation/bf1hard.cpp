// code by savir singh

#include <bits/stdc++.h>
using namespace std;

// driver code
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(), vec.end());
    for (int i : vec) {
        cout << i << "\n";
    }
}
