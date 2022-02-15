/**
 * @file halph_pyramid.c
 * @author Indranil Chakraborty
 * @brief Write a C Program To Print Halph Pyramid Star Pattern
 *                              *
 *                              **
 *                              ***
 *                              ****
 *                              *****
 * ------------------------------------------------------------------
 * @version 0.1
 * @date 2022-02-13
 *
 */

#include <stdio.h>
int main()
{

    int i;
    int j;
    int k;

    for (i = 1; i <= 5; i++)//row
    {
        for (j = i; j < 5; j++)//space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)//col
        {
            printf("*");
        }
        printf("\n");
    }
}

/**
 * @brief 
 * i=1 2
 * j=1 2 3 4 5
 * k=1 2
 * 
 * i<=5 1<=5 2<=5
 * j<5 1<5 2<5 3<5 4<5 5<5
 * 2<5 3<5 4<5 5<5
 * 
 * k<=i 1<=1 2<=1
 * 1<=2 2<=2 3<=2
 * 
 */
