#include <stdio.h>
int main()
{
    // declaring variables.

    int N,animal,rabbit=0,rat=0,frog=0,total=0;
    float per_rab,per_rat,per_frog;
    char nam;

    //reading the number of test case.

    scanf("%d",&N);

    //reading each animals used for experiments and total.

    for (int i=1; i<=N; i++)
    {
        scanf("%d %c",&animal,&nam);
        total += animal;
        if (nam =='C')
        {
            rabbit += animal;
        }
        else if (nam == 'R')
        {
            rat += animal;
        }
        else if (nam == 'S')
        {
            frog += animal;
        }
    }

    // calculating the percentage with the help of typecasting int total to float total.

    per_rab = (rabbit/(float)total)*100.00;
    per_rat = (rat/(float)total)*100.00;
    per_frog = (frog/(float)total)*100.00;

    // printing the results.

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %0.2f %%\n",per_rab);
    printf("Percentual de ratos: %0.2f %%\n",per_rat);
    printf("Percentual de sapos: %0.2f %%\n",per_frog);

    return 0;
}

