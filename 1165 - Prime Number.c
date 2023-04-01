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
        int X, term=0;

        // reading X.

        scanf(" %d", &X);

        // conditions for the prime number.

        if (X == 1)
        {
            printf("%d nao eh primo\n",X);
        }
        else if (X == 2)
        {
            printf("%d eh primo\n",X);
        }
        else
        {
            // loop for checking whether the number is prime or not.

            for (int j=2; j<X; j++)
            {
                if (X%j == 0)
                {
                    term++;
                }
            }

            // condition for checking if it's prime.

            if (term > 0)
            {
                printf("%d nao eh primo\n",X);
            }
            else
            {
                printf("%d eh primo\n",X);
            }
        }

        // incrementing i.

        i++;
    }

    return 0;

}

