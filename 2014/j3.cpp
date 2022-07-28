// code by savir singh

#include <stdio.h>

int main()
{
    int numRounds;
    int aScore = 100, dScore = 100;
    int dice1, dice2;
    scanf("%d", &numRounds);

    for (int i = 0; i < numRounds; i++)
    {
        scanf("%d %d", &dice1, &dice2);
        if (dice1 == dice2)
        {
            continue;
        }
        else if (dice1 > dice2)
        {
            dScore -= dice1;
        }
        else
        {
            aScore -= dice2;
        }
    }

    printf("%d\n%d", aScore, dScore);
}
