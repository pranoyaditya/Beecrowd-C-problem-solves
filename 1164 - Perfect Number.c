#include <stdio.h>
int main()
{
    // variables for the program.

    int N,X,i=1;

    // reading 'N'

    scanf(" %d", &N);

    // loop for running the program 'N' times.

    while (i <= N)
    {
        // sum for adding the divisors.

        int sum=0;

        // reading 'X'.

        scanf(" %d", &X);

        // loop for checking X is perfect or not.

        for (int j=1; j<X; j++)
        {
            // condition for the divisors and adding them to sum.

            if (X%j == 0)
            {
                sum += j;
            }

        }

        // condition for checking whether X is perfect and output.

        if ( sum == X)
        {
            printf("%d eh perfeito\n",X);
        }
        else
        {
            printf("%d nao eh perfeito\n",X);
        }


        i++;

    }

    return 0;
}
