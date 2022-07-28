#include <string>
#include <iostream>
// code by savir singh

#include <vector>
#include <numeric>
using namespace std;
int main() {
   int p;
   int n;
   int r;
   cin >> p;
   cin >> n;
   cin >> r;
   int day = 0;
   int infected = n;
   bool notreached = true;
   vector<int> infectedlist;
   infectedlist.push_back(infected);

   if(n!=1 || r!= 1) {
    while(notreached) {
        infected = infected*r;
        infectedlist.push_back(infected);
        day += 1;
        int total = accumulate(begin(infectedlist), end(infectedlist), 0, plus<int>());
        if (total>p) {
            notreached = false;
        }
    }
   }

   else {
    day = p;
   }
   cout << day;

}
