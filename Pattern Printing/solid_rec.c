#include <stdio.h>
int main()
{

    /**
     * ------------------Solid Rectangle Pattren-------------------
     *          *****
     *          *****
     *          *****
     *          *****
     *          *****
     *
     */

    int i, j;//i=row j=col

    for (i = 1; i <= 5; i++)//row
    {
        for (j = 1; j <= 5; j++)//col
        {
            printf(" * ");
        }
        printf("\n");
    }

    

    
    return 0;
}