// code by savir singh

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;


int32_t main(){
    int n;
    scan(n);
    vector<pii> points;
    double sum=0;
    for (int i=0; i<n; i++) {
        int x, y;
        scan(x); scan(y);
        points.emplace_back(x, y);
    }
    sum+=points[0].first*points[n-1].second;
    sum-=points[0].second*points[n-1].first;
    reverse(points.begin(), points.end());
    for (int i=0; i<n-1; i++) {
        sum += points[i].first * points[i + 1].second;
    }
    for (int i=0; i<n-1; i++) {
        sum-=points[i].second*points[i+1].first;
    }
    cout << ceil(abs(sum)/2) << endl;
}
