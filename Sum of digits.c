#include <stdio.h>
int main()
{
    // variables for the program.

    int num,temp,remainder,sum=0;

    scanf(" %d", &num);

    temp = num;
    // loop for the addition of the numbers by dividing using 10.

    while (temp != 0)
    {
        remainder = temp%10;
        sum += remainder;
        temp = temp/10;

    }

    // output.

    printf("Sum of the digits is %d\n",sum);

    return 0;
}

