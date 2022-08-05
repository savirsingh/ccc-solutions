// code by savir singh

// faster than s2.py but still returns TLE...

#include <bits/stdc++.h>
using namespace std;

int main() {

    int j, a;
    cin >> j >> a;
    vector<string> jerseys;
    vector<vector<string>> athletes;
    int requests = 0;
    vector<int> taken;
    vector<string> orders = {"S", "M", "L"};

    for (int i=0; i<j; i++) {
        string jer;
        cin >> jer;
        jerseys.push_back(jer);
    }

    for (int c=0; c<a; c++) {
        string ath;
        string athnum;
        cin >> ath >> athnum;
        vector<string> adder;
        adder.push_back(ath);
        adder.push_back(athnum);
        athletes.push_back(adder);
    }

    for (int k=0; k<athletes.size(); k++) {
        int index1, index2;
        string thejersey = jerseys[stoi(athletes[k][1])-1];
        string correctjersey = athletes[k][0];

        auto jerindex = find(orders.begin(), orders.end(), thejersey);
        auto corindex = find(orders.begin(), orders.end(), correctjersey);

        if (jerindex != orders.end())
        {

            index1 = jerindex - orders.begin();
        }
        if (corindex != orders.end())
        {

            index2 = corindex - orders.begin();
        }

        if (thejersey==correctjersey || index1 > index2) {
            if(find(taken.begin(), taken.end(), stoi(athletes[k][1])) == taken.end()) {
                requests += 1;
            }
            taken.push_back(stoi(athletes[k][1]));
        }
    }
    cout << requests;
}
