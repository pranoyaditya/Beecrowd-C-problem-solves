#include <stdio.h>
int main()
{
    // declaring variables and array.

    int N[10];
    int V,i=0;

    // taking the input.
        scanf(" %d", &V);

    // "do while" loop for printing the numbers.

    do
    {
        printf("N[%d] = %d\n",i,V);
        i++;
        V=(V*2);
    }
    while (i<10);

    return 0;
}

