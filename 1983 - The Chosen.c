#include <stdio.h>
int main()
{
    // arrays for registration number of students and notes.
    // N for number of students.

    int N,i,j,max,c=0;


    // reading the number of students.

    scanf(" %d", &N);

    int reginum[N];
    float note[N];
    float maxnum = note[0];

    // reading reginum.

    for (i=0,j=0; i<N,j<N; i++,j++)
    {
        scanf(" %d %f", &reginum[i], &note[j]);
    }

    // reading note.

    for (i=0; i<N; i++)
    {
        // checking condition for highest score.

        if (note[i] >= 8 && note[i]>maxnum )
        {
            maxnum = note[i];
            max = i;
            c++;
        }
    }

    if (c >= 1)
    {
        printf("%d\n",reginum[max]);
    }
    else
    {
        printf("Minimum note not reached\n");
    }

     return 0;
}
