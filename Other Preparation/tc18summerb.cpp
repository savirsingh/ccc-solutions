// code by savir singh

#include <stdio.h>

int main() {
    int c, d, e;
    scanf("%d %d %d", &c, &d, &e);
    
    if ((c ^ d) != e) {
        puts("0\n");
        return 0;
    }
    
    int ans = (1 << __builtin_popcount(e));
    printf("%d\n", ans);
    
    return 0;
}
