#include <stdio.h>

int main ()
{
    // variable and array for the program.

    int L;

    // loop for the L input.

    while (scanf(" %d", &L)!=EOF)
    {
        int V[L];

        // Considering V[0] is the highest.

        int max = V[0];

        // loop for reading V. Number of slugs.

        for (int i=0; i<L; i++)
        {
            scanf(" %d", &V[i]);
        }

        // loop for checking the highest level of speed of slugs.

        for (int i=0; i<L; i++)
        {
            if ( V[i] > max)
            {
                max = V[i]; // stores highest speed in max.
            }
        }

        // condition for the output of speed level.

        if (max < 10)
        {
            printf("1\n");
        }
        else if ( (max >= 10) && (max <20) )
        {
            printf("2\n");
        }
        else if ( max >= 20)
        {
            printf("3\n");
        }
    }

    return 0;
}
