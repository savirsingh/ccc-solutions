// code by savir singh

#include <iostream>
using namespace std;

int main()
{
    int s;
    int m;
    int l;
    int output = 0;
    cin >> s;
    cin >> m;
    cin >> l;
    output = 1*s+2*m+3*l;

    if (output>=10) {
        cout << "happy";
    }
    else {
        cout << "sad";
    }
}
