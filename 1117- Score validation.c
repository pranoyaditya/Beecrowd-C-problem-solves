#include <stdio.h>
int main()
{
    float a,avg,c=0,d=0;
    while(1)
    {
        if(d==2)    //condition of terminating the loop.
        {
            break;
        }
        scanf("%f", &a);
        if(a>=0 && a<=10)
        {
            c+=a;
            d++;
        }
        else
            printf("nota invalida\n");
    }
    avg=c/2;
    printf("media = %.2f\n", avg);
    return 0;
}


