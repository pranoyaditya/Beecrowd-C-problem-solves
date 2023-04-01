#include <stdio.h>

int main()
{
    long long int n;
    int k,total=0;

    scanf(" %lld %d", &n, &k);

    int num[k];

    for (int i=0; i<k; i++)
    {
        scanf(" %d", &num[i]);

    }


    for (int j=1; j<=n; j++)
    {
        for (int i=0; i<k; i++)
        {
            if ( (j%num[i]) || (j%num[i+1]) )
            {
                total++;
            }
        }
    }

    printf("%d\n",total);

    return 0;
}
