/**Write a Program to Find GCD or HCF of two numbers
entered by user*/

#include <stdio.h>
int main()
{
    //using while loop
    int n1, n2;//declare two variable

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    while (n1 != n2) //if n1 is not equal n2 then the loop will be execute 
    {
        if (n1 > n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    printf("GCD = %d", n1);

    return 0;
}

/**
 * @brief 
 * n1=42 16 6 2
 * n2=26 10 4 2
 * 
 * while n1!=n2 42!=26 16!=26 16!=10 6!=10 6!=4 2!=4 2!=2
 * if n1>n2 42>26 16>26 16>10 6>10 6>4 2>4
 * else n2=n2-n1 26-16 16-10 10-6 4-2
 *
 * n1 =n1-n2 42-26  6-4
 * 
 * n1 16 6 2
 * n2 = 10 4 2
 * 
 */

