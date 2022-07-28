// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main(){

    int month;
    int day;
    cin >> month;
    cin >> day;
    if(month<2) {
        cout << "Before";
    }
    if (month>2) {
        cout << "After";
    }
    if (month==2 && day>18) {
        cout << "After";
    }
    if (month==2 && day<18) {
        cout << "Before";
    }

    if (month==2 && day==18) {
        cout << "Special";
    }
    return 0;
}
