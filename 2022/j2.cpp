// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main(){

    int x;
    int goldplayers = 0;
    cin >> x;
    for (int i=0; i<x; i++) {
        int a;
        int b;
        cin >> a;
        cin >> b;
        if(a*5-b*3 > 40) {
            goldplayers += 1;
        }
    }
    if (goldplayers==x) {
        string gp = to_string(goldplayers) + "+";
        cout << gp;
    }
    else {
        cout << goldplayers;
    }
    return 0;
}
