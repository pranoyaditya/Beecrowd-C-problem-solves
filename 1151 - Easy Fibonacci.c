#include <stdio.h>
int main()
{
    int fibo = 0,ctr = 0,first = 0,second = 1,n;

    scanf(" %d", &n);

    while (ctr < n)
    {
        if (ctr <= 1)
        {
            fibo = ctr;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        if ( ctr == (n-1))
        {
            printf("%d\n",fibo);
        }
        else
        {
           printf("%d ",fibo);
        }



        ctr ++;

    }


    return 0;
}


