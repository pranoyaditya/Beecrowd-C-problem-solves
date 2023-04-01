#include <stdio.h>

int main()
{
    int n,i=0;

    scanf(" %d", &n);


    while (i<n)
    {
        char a[7];
        char b[7];

            scanf(" %s", a);
            scanf(" %s", b);

        // conditions for outputs
        // 'a' represents airstrike, 'p' represents rock
        // 'a[1] = a' represents paper

        if ( a[0] == 'a' && ( b[0]== 'p' || b[1] == 'a') )
        {
            printf("Jogador 1 venceu\n");
        }
        else if ( a[0] == 'p' && b[1] == 'a')
        {
            printf("Jogador 1 venceu\n");
        }
        else if ( a[1] == 'a' && b[1] == 'a' )
        {
            printf("Ambos venceram\n");
        }
        else if ( a[0] == 'p' && b[0] == 'p' )
        {
            printf("Sem ganhador\n");
        }
         else if ( a[0] == 'a' && b[0] == 'a' )
        {
            printf("Aniquilacao mutua\n");
        }
        else
        {
            printf("Jogador 2 venceu\n");
        }


        i++;
    }

    return 0;
}
