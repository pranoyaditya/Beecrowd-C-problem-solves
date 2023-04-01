#include <stdio.h>

int main()
{
    // variables for the problem.

    int N,total=0;
    //int temp=total;

    // reading 'N'

    scanf(" %d", &N);

    // loop for running the program till N times.

    for (int i=1; i<=N; i++)
    {
        // scanning X and Y. 'ter' is for loop breaking.

        int X,Y,ter=0;
        scanf(" %d %d", &X,&Y);

        // loop for main purpuse.

        for (int i=X; ; i++)
        {
            // condition for odd numbers.

            if (i%2 != 0)
            {
                total += i;
                ter++;
            }

            // loop breaking condition.

            if (ter == Y)
            {
                break;
            }
        }

        // output.

        printf("%d\n",total);

        // reseting total to 0.

        total = 0;
    }



    return 0;
}
