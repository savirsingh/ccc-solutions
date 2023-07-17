// code by savir singh
// https://dmoj.ca/problem/coci13c5p3
// 10/10
// oly homework / stacks practice

#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    string good, bad;
    cin >> good >> bad;
    int n = good.size();

    // empty explosion string
    if (bad.empty()) {
        cout << good << endl;
        return 0;
    }

    stack<pair<char, int>> stk;  // track potential explosions

    for (int i = 0; i < n; i++) {
        stk.push({good[i], i});

        // check if the top of the stack forms an explosion
        if (stk.size() >= bad.size()) {
            bool explosion = true;
            int idx = bad.size() - 1;
            stack<pair<char, int>> temp;  // temp stack to track exploded characters

            // check if the characters in the stack form the explosion
            while (idx >= 0) {
                if (stk.top().first != bad[idx]) {
                    explosion = false;
                    break;
                }
                temp.push(stk.top());
                stk.pop();
                idx--;
            }

            if (explosion) {
                while (!temp.empty()) {
                    temp.pop();
                }
            } else {
                while (!temp.empty()) {
                    stk.push(temp.top());
                    temp.pop();
                }
            }
        }
    }

    // construct final string
    string finalString;
    while (!stk.empty()) {
        finalString += stk.top().first;
        stk.pop();
    }
    reverse(finalString.begin(), finalString.end());

    // output the final string or "FRULA" if it's empty
    if (finalString.empty()) {
        cout << "FRULA" << endl;
    } else {
        cout << finalString << endl;
    }
}
