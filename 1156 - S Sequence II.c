#include <stdio.h>
int main()
{
    // variables.

    double S=1,i,j;

    // loop for calculation.

    for (i=3,j=2; i<=39; i+=2,j*=2)
    {
        S += (i/j);
    }

    //output;

    printf("%0.2lf\n",S);

    return 0;
}

