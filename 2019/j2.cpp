#include <bits/stdc++.h>

using namespace std;

int main() {
    int l;
    cin >> l;
    for (int i=0; i<l; i++) {
        int num;
        char ch;
        cin >> num >> ch;
        for (int j=0; j<num; j++) {
            cout << ch;
        }
        cout << "\n";
    }
}
