#include <stdio.h>
#include <string.h>

int main()
{

    int T,i=0;
    char a[8];
    char b[8];

    scanf(" %d", &T);


    // loop for the test cases.

    while (i < T)
    {


        // reading the inputs.

        scanf(" %s", &a);
        scanf(" %s", &b);

        /* conditions for winning.
            Here 'e' indicates rock.
           'p' indicates paper. 't' indicates scissors.
           'l' indicates lizard. 's' indicates spock.
        */

        // these conditions for only winning.

        if ( strcmp(a,"tesoura"))
        {
            if ( strcmp(b,"papel") || strcmp(b,"lagarto") )
            {
                printf("Caso #%d: Bazinga!\n",i+1);
            }
        }

        else if ( strcmp(a,"papel"))
        {
            if ( strcmp(b,"pedra") || strcmp(b,"spock") )
            {
                printf("Caso #%d: Bazinga!\n",i+1);
            }
        }

        else if ( strcmp(a,"pedra"))
        {
            if ( strcmp(b,"lagarto") || strcmp(b,"tesoura") )
            {
                printf("Caso #%d: Bazinga!\n",i+1);
            }
        }
        else if ( strcmp(a,"lagarto"))
        {
            if ( strcmp(b,"Spock") || strcmp(b,"papel") )
            {
                printf("Caso #%d: Bazinga!\n",i+1);
            }
        }
        else if ( strcmp(a,"Spock"))
        {
            if ( strcmp(b,"pedra") || strcmp(b,"tesoura") )
            {
                printf("Caso #%d: Bazinga!\n",i+1);
            }
        }





        // these conditions for only tie.

        else if ( a[0] == 't' && b[0] == 't')
        {
            printf("Caso #%d: De novo!\n",i+1);
        }
        else if ( a[0] == 'p' && b[0] == 'p' )
        {
            printf("Caso #%d: De novo!\n",i+1);
        }
        else if ( a[2] == 'd' && b[2] == 'd' )
        {
            printf("Caso #%d: De novo!\n",i+1);
        }
        else if ( a[0] == 'l' && b[0] == 'l' )
        {
            printf("Caso #%d: De novo!\n",i+1);
        }
        else if ( a[0] == 's' && b[0] == 's' )
        {
            printf("Caso #%d: De novo!\n",i+1);
        }

        // this is for losing.

        else
        {
            printf("Caso #%d: Raj trapaceou!\n",i+1);
        }


        i++;
    }

    return 0;
}


