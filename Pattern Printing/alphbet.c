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
#include <stdio.h>
int main()
{
    char a = 'A';
    char b = 'C' ;
    printf("%d\n%d\n", a, b);
    
    char i, j;
    char count = 'A';
    for (i = 'A'; i <= 'C'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c", count);
            count++;
        }
        printf("\n");
    }
}


/**
 * @brief 
 * 
 * 
 *
 */

/**
 * @file q5.c -
 * @author Indranil Chakraborty
 * @brief Write a C Program to Check whether a year entered by user is Leap Year or not
 * Example
 * 1st case User Input 2000
 *               output leap year
 * 2nd case user input 2001
 *               output not a leap year
 * @version 0.1
 * @date 2022-02-07
 *
 */
#include <stdio.h>
int main()
{
    int y;
    printf("Enter a Year: ");
    scanf("%d", &y);

    // Logic
    /**
     * @brief if year is divisible by 100 then the year is century year
     * -----------century year logic to find leap or not-----------------
     * if century yer is divisible by 400 then leap year 
     * if century yer is not divisible by 400 then not a leap year 
     * 
     */
    if (y % 100 == 0)
    {
        printf("%d is a century year\n", y);
        if (y % 400 == 0)
        {
            printf("%d is Leap Year", y);
        }
        else
        {
            printf("%d is Not a Leap Year", y);
        }
    }
    /**
     * @brief if year is not divisible by 100 then the year is not a century year
     * -----------non century year logic to find leap or not-----------------
     * if non century yer is divisible by 4 then leap year 
     * if non century yer is not divisible by 4 then not a leap year 
     * 
     */
    else
    {
        printf("%d Year is not a century year\n", y);
        if (y % 4 == 0)
        {
            printf("%d is Leap Year", y);
        }
        else
        {
            printf("%d is Not a Leap Year", y);
        }
    }
    return 0;
}