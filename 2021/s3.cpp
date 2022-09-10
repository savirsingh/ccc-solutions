// code by savir singh
// 15/15 on DMOJ & CCC Grader

#include <bits/stdc++.h>
using namespace std;

long long calc(vector<long long> pos, vector<long long> sp, vector<long long> dist, long long concert) {

    long long total = 0;
    for (int i=0; i<pos.size(); i++) {
        long long totaldis = abs(concert-pos[i]);
        if (totaldis > dist[i]) {
            long long mintravel = totaldis - dist[i];
            total += mintravel*sp[i];
        }
    }
    return total;

}

int main() {

    long long min1 = 10000000000;
    long long max1 = -10000000000;
    long long mintime;
    vector<long long> positions;
    vector<long long> speeds;
    vector<long long> maxdistances;

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int p, s, m;
        cin >> p >> s >> m;
        positions.push_back(p);
        speeds.push_back(s);
        maxdistances.push_back(m);

        if (positions[i] < min1) {
            min1 = positions[i];
        }
        if (positions[i] > max1) {
            max1 = positions[i];
        }
    }
    long long left = min1;
    long long right = max1;
    while (left<=right) {
        long long mid = (left+right)/2;
        long long midtime = calc(positions, speeds, maxdistances, mid);
        long long midright = calc(positions, speeds, maxdistances, mid+1);
        long long midleft = calc(positions, speeds, maxdistances, mid-1);

        if (midtime <= midright && midtime <= midleft) {
            mintime = midtime;
            break;
        }
        else if (midtime <= midright) {
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }
    cout << mintime;

}
