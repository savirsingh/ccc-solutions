// code by savir singh
// 15/15 on DMOJ & CCC Grader
// this was a hard problem lol (for an S1)

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string output = "A";
    bool stop=false;
    int ast = count(b.begin(), b.end(), '*');
    for (int i=0; i<a.length(); i++) {
        if (count(b.begin(), b.end(), '*')==b.length()) {
            output = "A";
            break;
        }
        else if (b[i]!='*' && find(a.begin(), a.end(), b[i])==a.end()) {
            output = "N";
            break;
        }
        else if (count(a.begin(), a.end(), a[i])<count(b.begin(), b.end(), a[i])) {
            output = "N";
            break;
        }
        else if (count(a.begin(), a.end(), a[i]) != count(b.begin(), b.end(), a[i])) {
            for (int j=1; j<=ast; j++) {
                if (count(a.begin(), a.end(), a[i])==count(b.begin(), b.end(), a[i])+j) {
                    output = "A";
                    ast-=j;
                    stop = true;
                    break;
                }
                else {
                    output = "N";
                }
            }
            if (stop==false) {
                output = "N";
                break;
            }
        }
    }
    cout << output;
}
