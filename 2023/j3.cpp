// code by savir singh

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> availability(n);
    for (int i = 0; i < n; i++) {
        cin >> availability[i];
    }

    int maxAttendees = 0;
    vector<int> bestDays;

    for (int day = 1; day <= 5; day++) {
        int attendees = 0;
        for (int i = 0; i < n; i++) {
            if (availability[i][day-1] == 'Y') {
                attendees++;
            }
        }
        if (attendees > maxAttendees) {
            maxAttendees = attendees;
            bestDays.clear();
            bestDays.push_back(day);
        } else if (attendees == maxAttendees) {
            bestDays.push_back(day);
        }
    }

    for (int i = 0; i < bestDays.size(); i++) {
        cout << bestDays[i];
        if (i < bestDays.size() - 1) {
            cout << ",";
        }
    }
    cout << endl;
}
