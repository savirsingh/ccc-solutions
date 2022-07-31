// code by savir singh

#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    vector <int> vec = {n1, n2, n3};
    sort(vec.begin(), vec.end());
    cout << vec[1];
}
