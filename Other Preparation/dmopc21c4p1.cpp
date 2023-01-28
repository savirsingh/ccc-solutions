// code by savir singh
// https://dmoj.ca/problem/dmopc21c4p1
// 100/100

#include <bits/stdc++.h>
using namespace std;
#define double long double
#define pii pair<double, double>
char _;

struct coor {
    pii a, b, c;
};

int32_t main(){
    int n, q;
    cin >> n >> q;
    coor coors[n + 1];
    for (int i = 1; i <= n; i++) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        coors[i] = {make_pair(x1, y1), make_pair(x2, y2), make_pair(x3, y3)};
    }
    for (int i = 0; i < q; i++) {
        double x, y;
        cin >> x >> y;
        double total=0;
        for (int j = 1; j <= n; j++) {
            coor curr = coors[j];
            double x1 = curr.a.first, y1 = curr.a.second;
            double x2 = curr.b.first, y2 = curr.b.second;
            double x3 = curr.c.first, y3 = curr.c.second;
            double maxX = max(max(x1, x2), x3);
            double maxY = max(max(y1, y2), y3);
            double minX = min(min(x1, x2), x3);
            double minY = min(min(y1, y2), y3);
            bool sign = false;
            double m, c;
            if (x < minX || x > maxX || y < minY || y > maxY) continue;
            if (x1 != x2 && y1 != y2) {
                m = (y2 - y1) / (x2 - x1);
                c = y1 - m * x1;
                if (y3 - m * x3 - c >= 0.0) sign = true;
            } else if (x1 != x3 && y1 != y3) {
                m = (y3 - y1) / (x3 - x1);
                c = y1 - m * x1;
                if (y2 - m * x2 - c >= 0.0) sign = true;
            } else if (x2 != x3 && y2 != y3) {
                m = (y3 - y2) / (x3 - x2);
                c = y3 - m * x3;
                if (y1 - m * x1 - c >= 0.0) sign = true;
                //if (x==2 && y==2) {
                    //cout << "CODE: "<< x3-x2 << endl;
                //}
            }
            if (sign && y - m * x - c >= 0) total++;
            else if (!sign && y - m * x - c <= 0) total++;
        }
        cout << (int)total << endl;
    }
}
