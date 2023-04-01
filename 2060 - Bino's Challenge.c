#include <stdio.h>
int main()
{
    int N,i,j,num2=0,num3=0,num4=0,num5=0;

    scanf(" %d", &N);

    for (i=0; i<N; i++)
    {
        scanf(" %d", &j);

        if (j%2 == 0)
        {
            num2++;
        }
        if (j%3 == 0)
        {
            num3++;
        }
        if (j%4 == 0)
        {
            num4++;
        }
        if (j%5 == 0)
        {
            num5++;
        }
    }

    printf("%d Multiplo(s) de 2\n",num2);
    printf("%d Multiplo(s) de 3\n",num3);
    printf("%d Multiplo(s) de 4\n",num4);
    printf("%d Multiplo(s) de 5\n",num5);

    return 0;
}
