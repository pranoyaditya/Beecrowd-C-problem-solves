#include <stdio.h>
int main()
{
    // variables input.

    int N,i,position;


    // reading the size of the array.

    scanf(" %d", &N);

    // array for the input.

    int X[N];

    // reading the array.

    for (i=0; i<N; i++)
    {
        scanf(" %d", &X[i]);
    }

    // considering max to be the lowest.

    int max = X[0];

    // checking the lowest input.

    for (i=0; i<N; i++)
    {
        if (X[i] < max)
        {
            max = X[i];
            position = i;
        }
    }

    // output.

    printf("Menor valor: %d\n",max);
    printf("Posicao: %d\n",position);

    return 0;
}
