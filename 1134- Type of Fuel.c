#include <stdio.h>
int main()
{
    int fuel,a=0,g=0,d=0;
    while (1)
    {
        scanf("%d",&fuel);
        if (fuel == 1)
        {
            a++; //counts the number of people took alcool
        }
        else if (fuel == 2)
        {
            g++;
        }
        else if (fuel == 3)
        {
            d++;
        }
        else if (fuel == 4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}

