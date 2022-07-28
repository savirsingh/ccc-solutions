// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main(){

    int x;
    int y = 0;
    cin >> x;

    if(x==100) {
        y=1;
    }
    else if(x<100) {
        y=2;
    }
    else {
        ;
    }
    if (y==0) {
        int a = 5*x-400;
        cout << a;
        cout << "\n";
        cout << "-1";
    }
    else if(y==1) {
        int a = 5*x-400;
        cout << a;
        cout << "\n";
        cout << "0";
    }
    else {
        int a = 5*x-400;
        cout << a;
        cout << "\n";
        cout << "1";
    }
    return 0;
}
