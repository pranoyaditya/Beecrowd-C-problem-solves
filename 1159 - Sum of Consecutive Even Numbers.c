#include <stdio.h>
int main()
{
    // variables for the program.

    int X,i,sum=0,term=0;

    // loop for reading X.

    while (1)
    {
        scanf(" %d", &X);

        // condition for breaking the loop.

        if (X == 0)
        {
            break;
        }
        else
        {
            for (i=X; ; i++)
            {
                // condition for summing the numbers.

                if (i%2 == 0)
                {
                    sum += i;
                    term++;
                }

                // loop breaking condition.

                if (term == 5)
                {
                    break;
                }
            }
        }

        // output.

        printf("%d\n",sum);

        // reseting sum and term.

        sum=0;
        term=0;
    }

    return 0;


}
