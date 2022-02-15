// C Program to check whether a number is prime or not
#include <stdio.h>

int main()
{
    int n; // Declare the nummber
    printf("Enter the number\n");
    scanf("%d", &n); // Initialize the number

    int count = 0; // Declare a count variable

    for (int i = 1; i <= n; i++) // Check for factors
    {
        if (n % i == 0)
            count++;
    }
    
    if (count==2) // Check whether Prime or not
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not a Prime number\n");
    }

    return 0;
}


/**
 * @brief Logic understanding
 * n=5
 * count = 0 1 2
 * i=1 2 3 4 5 6
 * i<=n = 1<=5 2<=5 3<=5 4<=5  5<=5
 * 
 * n%i==0  5%2=
 * 
 * count==2 2==2
 */
