// code by savir singh

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int year;
    int limit;
    vector<int> years;
    cin >> year;
    cin >> limit;
    int year1 = year;

    while (true) {
        year += 60;
        if (year<=limit) {
            years.push_back(year);
        }
        else {
            break;
        }
    }

    cout << "All positions change in year " + to_string(year1) << endl;

    for (int i : years) {
        cout << "All positions change in year " + to_string(i) << endl;
    }
}
