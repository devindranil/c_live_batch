/**
 * @file halph_pyramid.c
 * @author Indranil Chakraborty
 * @brief Write a C Program To Print Full Pyramid Star Pattern
                                *
                               * *
                              * * *
                             * * * *
                            * * * * *

 * ------------------------------------------------------------------
 * @version 0.1
 * @date 2022-02-13
 *
 */
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 5; j > i; j--) // left space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // middle&right side space coloumns
        {
            printf("* ");
        }
        printf("\n");
    }

    /**
     * @brief 
     * i=1 2
     * j=5
     * k=1
     * 
     * i<=5 1<=5 2<=5
     * j>i 5>1 4>1 3>1 2>1 1>1 
     * 5>2 4>2 3>2 2>2
     * 
     * k<=i 1<=1 2>=1
     * 1<=2 2<=2 3<=2
     * 
     */
}