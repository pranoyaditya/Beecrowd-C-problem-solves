#include <stdio.h>
int main()
{
    int num[100];
    int max,position;

    //loop for taking inputs.

    for (int i=0; i<100; i++)
    {
        scanf("%d",&num[i]);
    }
    //imagining max values and it's position.
     max = num[0];

    //comparing elements for the highest number and it's position.

    for (int i=0; i<100; i++)
    {
        if (num[i] > max)
        {
            max = num[i];

            position = i;
        }
    }
    // printing the results.

    printf("%d\n%d\n",max,position+1);

    return 0;
}

