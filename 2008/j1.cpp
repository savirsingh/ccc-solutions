// code by savir singh

#include <iostream>
using namespace std;

int main()
{
    float weight, height;
    cin >> weight >> height;

    float bmi = weight/(height*height);
    if (bmi<18.5) {
        cout << "Underweight";
    }
    else if (bmi<=25 && bmi>=18.5) {
        cout << "Normal weight";
    }
    else {
        cout << "Overweight";
    }
}
