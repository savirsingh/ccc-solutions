// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        char first = s[0];
        int c=1;
        while (s.length()>0) {
                s.erase(0, 1);
                if (s[0]==first) {
                    c++;
                }
                else {
                    cout << c << " " << first << " ";
                    first=s[0];
                    c=1;
                }
        }
        cout << endl;
    }
}
