// code by savir singh

#include <bits/stdc++.h>
#define int long long
#define del erase
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num1, num2;
    cin >> num1 >> num2;
    vector<int> sumac = {num1, num2};
    sumac.push_back(num1-num2);
    if (abs(num1-num2)<num2) {
        while (true) {
            int num3 = abs(sumac[sumac.size()-1]-sumac[sumac.size()-2]);
            sumac.push_back(num3);
            if (num3>sumac[sumac.size()-2]) {
                break;
            }
        }
    }
    cout << sumac.size();
}
