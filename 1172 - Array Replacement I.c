#include <stdio.h>
int main()
{
    // declaring variables and array.

    int X[10];

    // loop for taking the input.

    for (int i=0; i<10; i++)
    {
        scanf(" %d", &X[i]);
    }

    // loop for checking the numbers.

    for (int i=0; i<10; i++)
    {
        if (X[i]<=0)
        {
            // output.
            printf("X[%d] = 1\n",i);
        }
        else
        {
            // output.

            printf("X[%d] = %d\n",i,X[i]);
        }

    }

    return 0;
}

