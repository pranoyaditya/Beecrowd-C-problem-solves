#include <stdio.h>
int main()
{
    //variables for hot dogs and participants.

    int H,P;
    float avg,a,b;

    // reading H and P.

    scanf(" %d %d", &H, &P);

    //  calculating the average.

    a = H;
    b = P;

    avg = ( a / b );

    //output.

    printf("%0.2f\n",avg);

    return 0;
}
