#include <stdio.h>
int main()
{
    // variables for input.

    long long int M,N,sumN,sumM;
    int i;

    // loop for the inputs.

    while (scanf(" %lld %lld", &M, &N)!=EOF)
    {
        // variables for the sum.

        sumM = 1,sumN = 1;

        // loop for factorial.

        for (i=1; i<=M; ++i)
        {
            sumM *= i;
        }
        for (i=1; i<=N; ++i)
        {
            sumN *= i;
        }

        // output.

        printf("%lld\n",(sumM+sumN));
    }
    return 0;
}
