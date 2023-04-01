#include <stdio.h>
#include <stdlib.h>
int main()
{
    // D,VF,VG variables for the inputs.
    // sum1 and sum2 is for calculation.

    int D,VF,VG;

    // loop for the inputs.

    while ( scanf(" %d %d %d", &D, &VF, &VG)!=EOF )
    {
        int sum1,sum2;

        sum1 = (D+VF);
        sum2 = (VG*2);

        if (sum1 < sum2)
        {
            puts("S");
        }
        else
        {
            puts("N");
        }
    }

    return 0;
}
