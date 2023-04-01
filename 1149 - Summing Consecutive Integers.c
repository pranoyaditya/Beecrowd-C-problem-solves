#include <stdio.h>
int main ()
{
    // variables for the program.

    int A,N,sum=0;

    scanf(" %d", &A);

    // storing A to j for summing reason.

    int j=A;

    // loop for taking 'N' input

    while (1)
    {
        scanf(" %d", &N);
        if (N > 0)
        {
            break;
        }
    }

    // condition for summing the numbers.

    if (N == 1)
    {
        printf("%d\n",A);
    }

    else
    {
        // loop for summing the numbers.

        for (int i=1; i<=N; i++)
        {
            sum += j++;
        }
        printf("%d\n",sum);
    }


    return 0;
}
