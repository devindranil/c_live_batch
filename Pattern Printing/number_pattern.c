/**
 * @file halph_pyramid.c
 * @author Indranil Chakraborty
 * @brief Write a C Program To Print Alphabet Pattern
                               1
                               123
                               1234
                               12345


 * ------------------------------------------------------------------
 * @version 0.1
 * @date 2022-02-13
 * 
 */

#include<stdio.h>
int main(){
    int i,j;
    int count=1;
    for ( i = 1; i <=3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",count);
            count++;
            
        }
        printf("\n");
        
    }
    
}

/**
 * @brief 
 * i=1 2
 * j=1
 * count=1 2 3 4
 * i<=3 1<=3 2<=3
 * j<=i 1<=1 2<=1 
 * 1<=2 2<=2 3<=2
 * print count
 * 
 */
