#include <stdio.h>
int main()
{
    // variables for input and results.

    int a,b,q,r;

    // reading a and b.

    scanf(" %d %d", &a, &b);

    // calculation for quotient and remainder.

    q = (a/b);
    r = (a%b);

    if(r<0)
    {
        if(q<0)
            q--;
        if(q>0)
            q++;

        r=a-(b*q);
    }

    // output.

    printf("%d %d\n",q,r);

    return 0;
}
