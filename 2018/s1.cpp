// code by savir singh

#include <bits/stdc++.h>
#define int long long
const auto INF = std::numeric_limits<double>::infinity();
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%lld", &n);
    vector<double> villages (n);
    vector<double> sizes (n);
    sizes[0] = INF;
    sizes[n-1] = INF;
    for (int i=0; i<n; i++) {
        cin >> villages[i];
    }
    sort(villages.begin(), villages.end());
    for (int i=1; i<villages.size()-1; i++) {
        sizes[i] = (villages[i+1] - villages[i])/2+(villages[i]-villages[i-1])/2;
    }
    double min_ = INF;
    for (int j=0; j<villages.size(); j++) {
        if (sizes[j]<min_) {
            min_ = sizes[j];
        }
    }
    printf("%.1f",min_);
}
