#include <stdio.h>
int main()
{
    /*int i, j, k, no, value = 1;
    printf("Enter no of rows ");
    scanf("%d", &no);

    for (i = 0; i < no; i++)
    {
        for (j = 0; j < (no - i); j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {

            printf("%d", value);
            //value = (value * (i - k)) / (k + 1);

        }
        printf("\n");
    }*/

    int rows, coef = 1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}

/**
 * @brief 
 * rows=4
 * coef=1
 * space=1
 * i=0 1 2
 * j=0 1
 * i<rows 0<4
 * space<=rows 1<=4
 * 
 * 
 */