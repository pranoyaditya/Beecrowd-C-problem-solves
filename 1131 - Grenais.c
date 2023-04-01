#include <stdio.h>
int main()
{
    // declaring variables for total score.

    int tot_inter=0,tot_gremio=0,total=0,draw=0;

    // loop for reading goal numbers with variables.

    while (1)
    {
        int inter,gremio,X;
        scanf("%d %d",&inter,&gremio);

        total++;        //calculating total.

        //calculating how many times which team won.

        if (inter > gremio)
        {
            tot_inter++;
        }
        else if (inter < gremio)
        {
            tot_gremio++;
        }
        else if (inter == gremio)
        {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&X);
        if (X != 1)
        {
            break;
        }
    }
    // printing results.

    printf("%d grenais\n",total);
    printf("Inter:%d\n",tot_inter);
    printf("Gremio:%d\n",tot_gremio);
    printf("Empates:%d\n",draw);

    //identifying the winner.

    if (tot_gremio > tot_inter)
    {
        printf("Gremio venceu mais\n");
    }
    else if (tot_gremio < tot_inter)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        printf("Não houve vencedor\n");
    }
    return 0;

}
