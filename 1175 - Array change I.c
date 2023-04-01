#include <stdio.h>
int main()
{
    // array for storing numbers.
    // variables for swapping numbers.

    int N[20];
    int temp,j,i;


    // loop for inputs.

    for (i=0; i<20; i++)
    {
        scanf(" %d", &N[i]);
    }

    // loop for swapping numbers.

    for (i=0,j=19; i<20,j>=0; i++,j--)
    {

        if (i<10)
        {
            temp = N[i];
            N[i] = N[19-i];
            N[19-i] = temp;

            // output.

            printf("N[%d] = %d\n",i,N[i]);
        }

        else
        {
            temp = N[i];
            N[i] = N[j];
            N[j] = temp;

            // output.

            printf("N[%d] = %d\n",i,N[j]);
        }
    }

    return 0;

}


