// code by savir singh

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int ways = 0;
    bool done = false;

    if (n%4==0) {
        ways+=1;
    }
    if (n%5==0) {
        ways+=1;
    }
    temp = n-4;
    while (temp>4) {
        if (temp%5==0) {
            done = true;
            ways+=1;
        }
        temp-=4;
    }
    if (done==false) {
        temp = n-5;
        while (temp>5) {
            if (temp%4==0) {
                ways+=1;
            }
            temp-=5;
        }
    }
    cout << ways;
}
