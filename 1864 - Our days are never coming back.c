#include <stdio.h>
int main()
{
    // line for printing and variables for the program.

    int N;
    char line[35]= {'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};

    // reading the number.

    while (scanf(" %d", &N)!=EOF)
    {
        // loop for the sentence.

        for (int i=0; i<N; i++)
        {
            printf("%c",line[i]);

        }
        printf("\n");

    }

    return 0;
}
