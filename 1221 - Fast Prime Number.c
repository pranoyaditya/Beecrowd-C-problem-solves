#include <stdio.h>
int main()
{
    // variables for the test cases.

    int N,i=1;

    // reading N.

    scanf(" %d", &N);

    // loop for running the program 'N' times.

    while (i <= N)
    {
        // variables for reading the number and prime number checking.
        long long int X,half;
        int term=0;

        // reading X.

        scanf(" %lld", &X);

        half = (X/2);

        // conditions for the prime number.

        if (X == 1)
        {
            printf("Not Prime\n");
        }
        else if (X == 2)
        {
            printf("Prime\n");
        }
        else
        {
            // loop for checking whether the number is prime or not.

            for (int j=2; j<half; j++)
            {
                if (X%j == 0)
                {
                    term++;
                    break;
                }

            }

            if (term>0)
            {
                printf("Not Prime\n");
            }
            else
            {
                printf("Prime\n");
            }
        }

        // incrementing i.

        i++;
    }

    return 0;
}


