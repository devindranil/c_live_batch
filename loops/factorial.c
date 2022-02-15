#include <stdio.h>
int main()
{
    int num, i;

    // taking input from the user
    // store it in variable num.

    printf("Enter any positive number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);

    // using for loop and iterating to each number till our actual value
    // then using if inside for loop to print our factors

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

/**
 * @brief 
 * num=6
 * i=1 2 4 7
 * i<=num 1<=6 2<=6 4<=6 7<=6
 * num%i==0 6%1==0 6%2==0 4%6==2
 * print i
 * 1 2
 * 
 */

