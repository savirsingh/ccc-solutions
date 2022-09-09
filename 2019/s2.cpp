// code by savir singh

#include <bits/stdc++.h>
#define ll long long
#define del erase
using namespace std;

bool prime(ll num)
{
    if (num==1 || num==0) {
        return false;
    }
    for (int i=2; i<pow(num, 0.5)+1; i++) {
        if (num%i==0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll num;
        cin >> num;
        for (int i=0; i<num; i++) {
            if (prime(num-i) && prime(num+i)) {
                cout << num-i << " " << num+i << "\n";
                break;
            }
        }
    }
}
