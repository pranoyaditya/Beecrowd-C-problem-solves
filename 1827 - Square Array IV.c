#include <stdio.h>

int main()
{
    // declaring variables for loop and the array size.

    int i,j,n;

    // taking the input still EOF

    while ( scanf(" %d", &n)!=EOF)
    {
        // declaring square matrix array

        int mat[n][n];

        for (i=0; i<n; i++)
        {
            for (j=0; j<n; j++)
            {
                // conditions for printing the matrix

                if ( (i==0 && j==0) || (i==n-1 && j==n-1) )
                {
                    printf("2");
                }
                else if ( (i==0 && j==n-1) || (i==n-1 && j==0) )
                {
                    printf("3");
                }
                else if ( i==n/2 && j==n/2 )
                {
                    printf("4");
                }
                else if( (i>=1 && i<=n-2) && (j>=1 && j<=n-2) )
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }

        printf("\n");


    }

    return 0;
}
