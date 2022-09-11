// code by savir singh

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ascore=a*3+b*2+c;
    int d, e, f;
    cin >> d >> e >> f;
    int bscore=d*3+e*2+f;
    if (ascore>bscore) {
        cout << "A";
    }
    else if (bscore>ascore) {
        cout << "B";
    }
    else {
        cout << "T";
    }
}
