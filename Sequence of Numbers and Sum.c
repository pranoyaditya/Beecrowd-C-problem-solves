#include <stdio.h>
int main()
{
    int M,N,i,sum=0;
    for (;;)
    {

        scanf("%d %d",&M,&N);
        if (M<=0 || N<=0) {
            break;
        }


        if (M>N)
        {
            for (i=N; i<=M; i++)
            {
                sum += i;
                printf("%d ",i);
            }

        }
        if (N>M)
        {
            for (i=M; i<=N; i++)
            {
                sum += i;
                printf("%d ",i);
            }

        }
        printf("Sum=%d\n",sum);
    }

    return 0;
}
