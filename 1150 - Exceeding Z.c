#include <stdio.h>
int main()
{
    // variables for the input. "sum" is for storing the total addition and tot for storing how many times 2nd loop ran.

    int X,Z,sum=0,tot=0;

    // reading X.

    scanf(" %d", &X);

    //loop for reading Z until it's greater than X and j for storing X.

    int j=X;
    while (1)
    {
        scanf(" %d", &Z);

        // condition for breaking the loop.

        if (Z>X)
        {
            break;
        }
    }

    // loop for summing the numbers and logic for the output.

    for (int i=1; ; i++)
    {
        sum += j++;
        tot++;

        // condition for breaking the loop.

        if (sum>Z)
        {
            break;
        }


    }

    //output.

    printf("%d\n",tot);

    return 0;

}
