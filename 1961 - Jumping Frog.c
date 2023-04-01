#include <stdio.h>
int main()
{
    // array for holding height numbers.
    // P,N for jump height and numbers.

    int P,N,i,sum,win=0;


    // reading the inputs.

    scanf(" %d %d", &P, &N);
    int height[N];
    sum = P;

    // loop for array inputs.

    for (i=0; i<N; i++)
    {
        scanf(" %d", &height[i]);

    }

    for (i=0; i<N; i++)
    {
        sum += height[i];

        // condition for winning.

        if (sum >= height[i+1])
        {
            win++;
        }

        sum = P;
    }

    if (win >= 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}
