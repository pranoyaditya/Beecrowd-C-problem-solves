#include <stdio.h>
int main()
{
    // variables for the problem.
    int T,i=1;

    // reading T.

    scanf(" %d", &T);

    // loop for running the program for T times.

    while (i <= T)
    {
        // variables for two radius and output.

        int R1,R2,R3;

        // reading R1 and R2.

        scanf(" %d %d", &R1, &R2);

        // R3 calculating.

        R3 =( (2*R1 + 2*R2) / 2);

        //output.

        printf("%d\n",R3);

        i++;
    }
    return 0;
}
