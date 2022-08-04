// code by savir singh

#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {

    string instruction, last3, prevdir;

    while (true) {
        last3 = "";
        cin >> instruction;

        last3.push_back(instruction[2]);
        last3.push_back(instruction[3]);
        last3.push_back(instruction[4]);

        int first, second, sum;
        first = instruction[0] - '0';
        second = instruction[1] - '0';
        sum = first+second;

        if (instruction == "99999") {
            break;
        }

        else if (sum%2==0 && sum != 0) {
            cout << "right " + last3 << endl;
            prevdir = "right ";
        }
        else if (sum == 0) {
            cout << prevdir + last3 << endl;
        }
        else if (sum%2!=0 && sum != 0) {
            cout << "left " + last3 << endl;
            prevdir = "left ";
        }
    }

}
