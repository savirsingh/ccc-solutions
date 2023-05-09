// code by savir singh
// https://dmoj.ca/problem/cco16p4
// 25/25

#include <iostream>
using namespace std;
#define f(i,x,n) for(int i=x;i<n;i++)
#define fe(i,x,n) for(int i=x;i<=n;i++)

const int MM = 10001;
int n, g, ans = 0, fin[1 << 21];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr); 
    cin >> n >> g;
    fe(_, 1, g)
    {
        int res = 0;
        fe(j, 1, n)
        {
            fe(k, 1, n)
            {
                char go; cin >> go;
                if (go == 'R') {
                    res ^= 1 << j;
                    res ^= (1 << (k + 10));
                }
            }
        }
        ans += fin[res];
        fin[res]++;
    }
    cout << ans << endl;
}
