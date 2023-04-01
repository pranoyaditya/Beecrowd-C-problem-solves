#include <stdio.h>

int main()
{
    // array and variables for the program.

    double M[12][12];
    double sum=0;
    char op;
    int L,row,col;

    // reading the line and operation

    scanf(" %d", &L);
    scanf(" %c", &op);

    // reading the matrix elements

    for (row=0; row<12; row++)
    {
        for (col=0; col<12; col++)
        {
            scanf(" %lf", &M[row][col]);

            if(L == row)
            {
                sum += M[row][col];
            }
        }
    }

    // giving output according to the operation given.

    if (op == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if (op == 'M')
    {
        printf("%.1lf\n",sum/12);
    }

    return 0;

}
