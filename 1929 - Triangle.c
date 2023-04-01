#include <stdio.h>
int main()
{
    //variables for the program.

    int A,B,C,D,sum=0;

    // reading inputs.

    scanf(" %d %d %d %d", &A, &B, &C, &D);

    // conditions for the triangle.

    if ( ((A+B)>C) && ((A+C)>B) && ((B+C)>A) )
    {
        sum++;
    }
    else if ( ((B+C)>D) && ((B+D)>C) && ((C+D)>B) )
    {
        sum++;
    }
        else if ( ((C+D)>A) && ((A+D)>C) && ((A+C)>D) )
    {
        sum++;
    }
        else if ( ((A+B)>D) && ((B+D)>A) && ((A+D)>B) )
    {
        sum++;
    }

    // condition for output.

    if ( sum >= 1)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}
