// code by savir singh

// WA error on test case 6

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    vector<float> heights;
    vector<float> widths;
    float area = 0;
    cin >> n;
    for (int s=0; s<n+1; s++) {
        float a;
        cin >> a;
        heights.push_back(a);
    }

    for (int t=0; t<n; t++) {
        float a;
        cin >> a;
        widths.push_back(a);
    }

    for (int i=0; i<n; i++) {
        area += (widths[i]*(heights[i] + heights[i+1]))/2;
    }

    string areastring = to_string(area);
    cout << fixed << setprecision(1) << area;

}
