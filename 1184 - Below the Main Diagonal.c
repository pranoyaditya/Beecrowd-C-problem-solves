#include <stdio.h>

int main()
{
    // array and variables for the program.

    double M[12][12];
    double sum=0,i=0;
    char O;
    int row,col;

    // reading operation

    scanf(" %c", &O);

    // reading the matrix elements

    for (row=0; row<12; row++)
    {
        for (col=0; col<12; col++)
        {
            scanf(" %lf", &M[row][col]);

            if(row > col)
            {
                sum += M[row][col];
                i++;
            }
        }
    }

    // giving output according to the given operation.

    if (O == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if (O == 'M')
    {
        printf("%.1lf\n",sum/i);
    }

    return 0;

}
