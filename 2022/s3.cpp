// code by savir singh

#include <bits/stdc++.h>
using namespace std;
// macros
#define int long long
#define double long double
#define bit32 int32_t
#define del erase
#define pb push_back
#define str string
#define scani(x) scanf("%lld", &x)
#define scan(x) scanf("%s", &x)
#define scanc(x) scanf("%c", &x)
#define printi(x) printf("%lld", x);
#define print(x) printf("%s", x);
#define printc(x) printf("%c", x);
#define pii pair<int, int>

// all vars
const int MAX=1e6+2;
int N, M, K;
vector<int> arr;

// driver code
bit32 main() {
    cin >> N >> M >> K;
    for (int i=0; i<N; i++) {
        int largest_possible=N-i-1, adding;
        int adder=min(K-largest_possible, M);
        if (adder==0) break;
        if (adder>i) {
            adding=min(i+1, M);
            adder=adding;
        }
        else {
            adding=arr[i-adder];
        }
        arr.pb(adding);
        K-=adder;
    }
    if (K==0 && arr.size()==N) {
        for (int i=0; i<N; i++) {
            cout << arr[i];
            if (i != N - 1) cout << " ";
        }
    }
    else {
        cout << -1;
    }
    cout << "\n";
}
