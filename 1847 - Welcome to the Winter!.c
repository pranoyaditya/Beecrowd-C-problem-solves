#include <stdio.h>

int main()
{
    //variables for the temperature of 1st,2nd and 3rd day
    // respectively are A,B,C and diff1 and diff2 for subtraction result.

    int A,B,C,diff1,diff2;

    // reading A,B,C.

    scanf(" %d %d %d", &A, &B, &C);

    // condition for the 1st figure.

    if ( (B<A) && ((C>B) || (C == B)) )
    {
        printf (":)\n");
    }

    // condition for the 2nd figure.

    else if ( (B>A) && ((C<B) || (C == B)) )
    {
        printf(":(\n");
    }

    // condition for 3rd and 4th figure.

    else if ( (B>A) && (C>B) )
    {
        diff1 = C-B;
        diff2 = B-A;

        if (diff1 < diff2)
        {
            printf(":(\n");
        }
        else if (diff1 >= diff2)
        {
            printf (":)\n");
        }
    }

    // condition for 5th and 6th figure.

    else if ( (A>B) && (B>C) )
    {
        diff1 = B-C;
        diff2 = A-B;

        if (diff1 < diff2)
        {
            printf (":)\n");
        }
        else if (diff1 >= diff2)
        {
            printf(":(\n");
        }
    }

    // condition for 7th figure.

    else if ( (A == B) && (C>B) )
    {
        printf (":)\n");
    }

    // condition for 8th figure.

    else if ( (A == B) && (C<B) )
    {
        printf (":(\n");
    }

    return 0;
}
