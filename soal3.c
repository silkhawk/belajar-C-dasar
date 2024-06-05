#include <stdio.h>
int main()
{
    int i,j,k;
    int tinggi=5;
    for ( i = 1; i <=tinggi; i++)
    {
        for (j = 1; j <= tinggi -i; ++j)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}