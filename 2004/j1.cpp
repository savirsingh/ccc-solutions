// code by savirsingh

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int tiles;
    cin >> tiles;
    float sqroot = pow(tiles, 0.5);
    int a = (int)sqroot;
    string astring = to_string(a);

    cout << "The largest square has side length " + astring + ".";
}
