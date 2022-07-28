// code by savir singh

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {

    int a;
    cin >> a;
    string x;
    cin >> x;
    list<char> b(x.begin(), x.end());
    int bcount = 0;
    int acount = 0;
    for (char y:b) {
        if (y=='A') {
            acount+=1;
        }
        else {
            bcount+=1;
        }

    }
    if (acount>bcount) {
        cout << "A";
    }
    else if (bcount>acount) {
        cout << "B";
    }
    else {
        cout << "Tie";
    }

}
