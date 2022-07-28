// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main(){

    int limit;
    int speed;
    int difference;
    cin >> limit;
    cin >> speed;
    difference = speed-limit;
    if(difference>1 && difference<20) {
        cout << "You are speeding and your fine is $100.";
    }
    else if(difference>21 && difference<30) {
        cout << "You are speeding and your fine is $270.";
    }
    else if(difference>31) {
        cout << "You are speeding and your fine is $500.";
    }
    else {
        cout << "Congratulations, you are within the speed limit!";
    }
    return 0;
}
