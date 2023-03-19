// code by savir singh
// https://dmoj.ca/problem/lis
// 100/100

#include <bits/stdc++.h>
using namespace std;
// macros
//#define int long long
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

// fast i/o
void read(int &number)
{
    bool negative = false;
    register int c;

    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;

        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}

// all vars

// driver code
//bit32 main() {
//    int N; read(N);
//    int arr[N];
//    vector<int> len;
//    for (int i=0; i<N; i++) {
//        read(arr[i]);
//    }
//    len.pb(arr[0]);
//    for (int i=1; i<N; i++) {
//        if (arr[i]>len[len.size()-1]) len.pb(arr[i]);
//        else {
//           int left=lower_bound(len.begin(), len.end(), arr[i])-len.begin();
//            len[left]=arr[i];
//        }
//    }
//    cout << len.size() << "\n";
//}

const int MM = 1e6 + 1;
int n, a[MM];
vector<int> lis;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (lis.empty()) lis.push_back(a[i]);
        else if (a[i] > lis[lis.size()-1]) lis.push_back(a[i]);
        else {
            int index = lower_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
            lis[index] = a[i];
        }
    }
    cout << lis.size() << endl;
}
