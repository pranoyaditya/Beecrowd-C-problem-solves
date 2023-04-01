#include <stdio.h>
int main()
{
    // declaring variables.sum2 for L.C.M.

    int num1,num2,n1,n2,rem,sum2;

    // reading the input.

    scanf(" %d %d", &num1, &num2);

    n1=num1;
    n2=num2;

    // loop for calculating the numbers.

    if (n1 > n2)
    {
        while (n2 != 0)
        {
            rem = n1%n2;
            n1 = n2;
            n2 = rem;
        }

        // calculating L.C.M.

        sum2 = (num1*num2)/n1;

        // output.

        printf("G.C.D.(Greatest Common Divisor) of %d and %d is: %d\n",num1,num2,n1);
        printf("L.C.M.(Least Common Multiply) of %d and %d is: %d\n",num1,num2,sum2);
    }
    else
    {
         while (n1 != 0)
        {
            rem = n2%n1;
            n2 = n1;
            n1 = rem;
        }

        // calculating L.C.M.

        sum2 = (num1*num2)/n2;

        // output.

        printf("G.C.D.(Greatest Common Divisor) of %d and %d is: %d\n",num1,num2,n2);
        printf("L.C.M.(Least Common Multiply) of %d and %d is: %d\n",num1,num2,sum2);

    }

    return 0;

}

