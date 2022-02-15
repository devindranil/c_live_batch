/**
 * @file halph_pyramid.c
 * @author Indranil Chakraborty
 * @brief Write a C Program To Print Inverted Halph Pyramid Star Pattern
 *                              ******
 *                              ****
 *                              ***
 *                              **
 *                              *
 * ------------------------------------------------------------------
 * @version 0.1
 * @date 2022-02-13
 *
 */
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // Print The Row
    {
        for (j = 5; j >= i; j--) // Print The Coloumn
        {
            printf("*");
        }
        printf("\n"); // To Print a New Lin After Each Itereation Of For Loop
    }
}

/**
 * @brief 
 * i=1 2 3
 * j=5 
 * i<=5 1<=5
 * j>=i 5>=1 4>=1 3>=1 2>=1 1>=1 0>=1
 * 5>=2 4>=2 3>=2 2>=2 1>=2
 * 
 */