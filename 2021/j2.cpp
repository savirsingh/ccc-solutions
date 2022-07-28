// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    string winner = "";
    int highest_bid = 0;
    cin >> n;

    for (int i=0; i<n; i++) {
        string name;
        int bid;
        cin >> name;
        cin >> bid;
        if(bid>highest_bid) {
            winner = name;
            highest_bid = bid;
        }
    }
    cout << winner;
    return 0;
}
