#include <stdio.h>
int main()
{
    // variables.

    double S=1,i;

    // loop for calculation.

    for (i=2; i<=100; i++)
    {
        S += (1/i);
    }

    //output;

    printf("%0.2lf\n",S);

    return 0;
}
