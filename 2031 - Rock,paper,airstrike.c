#include <stdio.h>

int main()
{
    int n,i=0;

    char a[14];
    char b[14];
    scanf(" %d", &n);


    while (i<n)
    {


        scanf(" %s", a);
        scanf(" %s", b);
        getchar();

        // conditions for outputs
        // 't' represents airstrike, 'e' represents rock
        // 'a' represents paper

        if ( a[1]=='t' && ( b[1]=='e' || b[1]=='a' ) )
        {
            printf("Jogador 1 venceu\n");
        }
        else if ( a[1] == 'e' && b[1] == 'a' )
        {
            printf("Jogador 1 venceu\n");
        }
        else if ( a[1] == 'a' && b[1] == 'a')
        {
            printf("Ambos venceram\n");
        }
        else if ( a[1] == 'e' && b[1] == 'e' )
        {
            printf("Sem ganhador\n");
        }
        else if ( a[1] == 't' && b[1] == 't' )
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
