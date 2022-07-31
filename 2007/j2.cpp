// code by savir singh

#include <iostream>
#include <string>
using namespace std;

int main()
{
    while (true) {
        string line;
        cin >> line;
        if (line == "CU") {
            cout << "see you" << endl;
        }
        else if (line == ":-)") {
            cout << "I'm happy" << endl;
        }
        else if (line == ":-(") {
            cout << "I'm unhappy" << endl;
        }
        else if (line == ";-)") {
            cout << "wink" << endl;
        }
        else if (line == ":-P") {
            cout << "stick out my tongue" << endl;
        }
        else if (line == "(~.~)") {
            cout << "sleepy" << endl;
        }
        else if (line == "TA") {
            cout << "totally awesome" << endl;
        }
        else if (line == "CCC") {
            cout << "Canadian Computing Competition" << endl;
        }
        else if (line == "CUZ") {
            cout << "because" << endl;
        }
        else if (line == "TY") {
            cout << "thank-you" << endl;
        }
        else if (line == "YW") {
            cout << "you're welcome" << endl;
        }
        else if (line == "TTYL") {
            cout << "talk to you later" << endl;
            break;
        }
        else {
            cout << line << endl;
        }
    }
}
