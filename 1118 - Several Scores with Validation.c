#include <stdio.h>
int main()
{
    // declaring variables and the loop.

    float sum=0;
    int d=0;

    while(1)
    {
        float scr,avg;

        //reading scores.

        scanf("%f",&scr);
        if (scr >= 0 && scr <= 10)
        {
            d++;
            sum += scr;

            //calculating average.

            if (d == 2)
            {
                avg = sum/2;
                printf("media = %0.2f\n",avg);
                printf("novo calculo (1-sim 2-nao)\n");

                break;

            }

        }
        else
        {
            printf("nota invalida\n");
        }
    }

    // reseting sum and d;

    sum = 0;
    d = 0;

    // loop for reading X and calculation.

    while (1)
    {
        // variables for this loop.

        float scr,avg;
        int X;

        // reading 'X'.

        scanf(" %d", &X);

        // condition for new calculation.

        if (X == 1)
        {
            //reading scores with this loop.
            // it helps not to become the first loop to be an infinite loop.

            while (1)
            {

                scanf("%f",&scr);
                if (scr >= 0 && scr <= 10)
                {
                    d++;
                    sum += scr;

                    //calculating average.

                    if (d == 2)
                    {
                        avg = sum/2;
                        printf("media = %0.2f\n",avg);
                        printf("novo calculo (1-sim 2-nao)\n");

                        // reseting sum and d;

                        sum = 0;
                        d = 0;
                        break;

                    }

                }
                else
                {
                    printf("nota invalida\n");
                }
            }
        }

        else if (X == 2)
        {
            break;
        }

        // condition for printing novo statement.

        else if ( (X != 1) && (X != 2))
        {
            printf("novo calculo (1-sim 2-nao)\n");
        }


    }

    return 0;
}
