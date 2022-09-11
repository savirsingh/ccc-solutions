// code by savir singh

#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    scanf("%lld", &n);
    int smallest_a=101, smallest_b=101, largest_a=0, largest_b=0;
    for (int i=0; i<n; i++) {
        int a, b;
        scanf("%lld%*c", &a);
        scanf("%lld%*c", &b);
        if (a<smallest_a) {
            smallest_a=a;
        }
        if (a>largest_a) {
            largest_a=a;
        }
        if (b<smallest_b) {
            smallest_b=b;
        }
        if (b>largest_b) {
            largest_b=b;
        }
    }
    printf("%lld,%lld\n", smallest_a-1, smallest_b-1);
    printf("%lld,%lld\n", largest_a+1, largest_b+1);
}
