#include <stdio.h>
int main()
{
    // variables for the program.
    // PA, PB , G1, G2 for population and percentages.

    int T, PA, PB, totalA,totalB,year=1;
    float G1, G2;

    // scaning T.

    scanf(" %d", &T);

    // loop for taking other inputs.

    for (int i=1; i<=T; i++)
    {
        scanf (" %d %d %f %f", &PA, &PB, &G1, &G2);

        totalA = PA;
        totalB = PB;

        // loop for calculating years.

        while (1)
        {
            totalA += (int)(totalA* (G1/100) );
            totalB += (int)(totalB* (G2/100) );

            // condition for breaking the loop.

            if (totalA > totalB)
            {
                break;
            }
            else
            {
                year++;
                if (year > 100)
                {
                    break;
                }
            }
        }

        // condition for outputs.

        if (year > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else
        {
            printf("%d anos.\n",year);
        }

        // reseting variables.
        year = 1;
        totalA=0;
        totalB=0;

    }

    return 0;
}
