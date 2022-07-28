// code by savir singh

#include <stdio.h>

int main()
{
    int antennae;
    int eyes;
    scanf("%d %d", &antennae, &eyes);
    if (antennae>=3 && eyes<=4) {
        printf("TroyMartian");
        printf("\n");
    }
    if (antennae<=6 && eyes>=2) {
        printf("VladSaturnian");
        printf("\n");
    }
    if (antennae<=2 && eyes<=3) {
        printf("GraemeMercurian");
        printf("\n");
    }
}
